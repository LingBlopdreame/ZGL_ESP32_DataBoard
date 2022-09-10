/*
 * Copyright (c) 2022 by LingBlopdreame, All rights reserved.
 * Author: LingBlopdreame
 * LastEditors: LingBlopdreame
 * FilePath: 
 * Description: 
 */
#include "guiTask.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"
#include "freertos/queue.h"
#include "esp_freertos_hooks.h"
#include "esp_wifi_types.h"
#include "esp_log.h"

#include "esp_err.h"
#include "main.h"
#include "mqtt_client.h"

#include "GUI/ui.h"

#include "lvgl/lvgl.h"
#include "lvgl_helpers.h"
#include "infoType.h"


extern SemaphoreHandle_t wifiConnectStatusMutex;
extern SemaphoreHandle_t mqttConnectStatusMutex;
extern SemaphoreHandle_t adcMutex;
extern SemaphoreHandle_t ssidInfoMutex;
extern SemaphoreHandle_t connectSemphr;
extern SemaphoreHandle_t ssidRefreshSemphr;
extern SemaphoreHandle_t ssidRefreshedSemphr;
extern SemaphoreHandle_t ssidRequestSemphr;
extern QueueHandle_t ssidResponseQueue;

SemaphoreHandle_t guiMutex;
bool wifiConnectStatus = false;
extern uint16_t ap_count;
extern wifi_ap_record_t ap_info[8];
extern esp_mqtt_client_handle_t client;

bool dacStatus = false;
extern adc1_channel_t adcChannel[2];
extern dac_cw_config_t dac_config;

void set_ADC_value(lv_obj_t **checkbox, lv_obj_t **dropdown, lv_obj_t **valueLabel, adc1_channel_t *channel) {
    if (lv_obj_get_state(*checkbox) == LV_STATE_CHECKED) {
        if (lv_dropdown_get_selected(*dropdown) == 0) {
            lv_label_set_text(*valueLabel, "0000");
        } else if (lv_dropdown_get_selected(*dropdown) == 1) {
            lv_label_set_text_fmt(*valueLabel, "%d", ADC_readVoltage(channel[0]));
        } else if (lv_dropdown_get_selected(*dropdown) == 2) {
            lv_label_set_text_fmt(*valueLabel, "%d", ADC_readVoltage(channel[1]));
        }
    }
}

// TODO: 通过队列通知 Core0 connect WIFI, WIFI 状态使用应上锁
void connectWifiFunc(lv_event_t *e) {
    (void) e;
    xSemaphoreGive(connectSemphr);
}

/**
 * @brief 
 * @param e
 */
void ssidRefreshFunc(lv_event_t * e) {
    (void) e;
    xSemaphoreGive(ssidRefreshSemphr);
}

/**
 * @brief 创建一个任务通过检测队列刷新 setting 界面
 * @param pvParameters
 */
void guiRefreshTask(void *pvParameters) {
    (void) pvParameters;
    lv_obj_t *page;
    for (;;) {
        vTaskDelay(pdMS_TO_TICKS(200));
        if (xSemaphoreTake(guiMutex, 5)) {
            /**
             * 获取当前页面, 根据不同的界面进行不同的刷新操作, 该应用一共包含两个页面,
             * 当页面为 Screen1 时, 表示当前为主界面, 主要进行 WIFI 标志 以及 adc 数据 的刷新
             * 当页面为 Screen2 时, 表示当前为设置页面, 主要进行 WIFI 列表 以及 按键文本 的刷新
             */
            page = lv_scr_act();
            if (page == ui_Screen1) {
                if (xSemaphoreTake(wifiConnectStatusMutex, 5)) {
                    // 根据 wifi 连接状态, 更新 wifi 状态指示图标
                    if (wifiConnectStatus) {
                        lv_img_set_src(ui_WIFIIcon, &ui_img_wlan_png);
                    } else {
                        lv_img_set_src(ui_WIFIIcon, &ui_img_nowifi_png);
                    }
                    xSemaphoreGive(wifiConnectStatusMutex);
                }
                if (xSemaphoreTake(adcMutex, portMAX_DELAY)) {
                    // 更新 adc 数据
                    set_ADC_value(&ui_flag0, &ui_channel0, &ui_ADCValue0, adcChannel);
                    set_ADC_value(&ui_flag1, &ui_channel1, &ui_ADCValue1, adcChannel);
                    set_ADC_value(&ui_flag2, &ui_channel2, &ui_ADCValue2, adcChannel);
                    set_ADC_value(&ui_flag3, &ui_channel3, &ui_ADCValue3, adcChannel);
                    xSemaphoreGive(adcMutex);
                }
            } else if (page == ui_Screen2) {
                if (xSemaphoreTake(wifiConnectStatusMutex, 5)) {
                    // 根据 wifi 连接状态更新按键文本
                    if (wifiConnectStatus) {
                        lv_label_set_text(ui_Label14, "Disconnect");
                    } else {
                        lv_label_set_text(ui_Label14, "Connect");
                    }
                    xSemaphoreGive(wifiConnectStatusMutex);
                }
                if (xSemaphoreTake(ssidRefreshedSemphr, 0)) {
                    // WIFI 列表刷新
                    uint8_t pos = 0;
                    lv_dropdown_clear_options(ui_SSID);
                    lv_dropdown_add_option(ui_SSID, "None", pos++);
                    if (xSemaphoreTake(ssidInfoMutex, portMAX_DELAY)) {
                        for (uint16_t i = 0; i < ap_count; i++) {
                            lv_dropdown_add_option(ui_SSID, (char *) ap_info[i].ssid, pos++);
                        }
                        xSemaphoreGive(ssidInfoMutex);
                    }
                }
                if (xSemaphoreTake(ssidRequestSemphr, 0)) {
                    // 获取当前填写的 wifi 名称与密码, 为下一步连接准备
                    info_t info;
                    lv_dropdown_get_selected_str(ui_SSID, (char *) (&info)->ssid, 32);
                    char *password = (char *)lv_textarea_get_text(ui_passwordText);
                    memcpy((&info)->password, password, 64);
                    ESP_LOGI("Core1", "ssid: %s, password: %s", info.ssid, info.password);
                    xQueueSend(ssidResponseQueue, &info, portMAX_DELAY);
                }
            }
            xSemaphoreGive(guiMutex);
        }
    }
}

static void lv_tick_callback(void *arg) {
    (void) arg;
    lv_tick_inc(LV_TICK_PERIOD_MS);
}

void ampEventCallback(lv_event_t *e) {
    (void) e;
    uint32_t ampValue = (uint32_t)lv_slider_get_value(ui_amplitude);
    dac_config.scale = 4-ampValue;
    dac_cw_generator_config(&dac_config);
}

void freEventCallback(lv_event_t *e) {
    (void) e;
    uint32_t freValue = (uint32_t)lv_slider_get_value(ui_frequency);
    dac_config.freq = freValue;
    dac_cw_generator_config(&dac_config);
}

void buttonEventCallback(lv_event_t * e) {
    uint16_t dacChannel = lv_dropdown_get_selected(ui_channel4);
    if (!dacStatus) {
        dac_config.en_ch = dacChannel;
        dac_output_enable(dacChannel);
        lv_label_set_text(ui_buttonLabel, "Close");
        dacStatus = true;
    } else {
        dac_config.en_ch = dacChannel;
        dac_output_disable(dacChannel);
        lv_label_set_text(ui_buttonLabel, "Open");
        dacStatus = false;
    }
}

void guiTask(void *pvParameter) {
    (void) pvParameter;
    guiMutex = xSemaphoreCreateMutex();

    lv_init();
    lvgl_driver_init();

    lv_color_t* buf1 = heap_caps_malloc(DISP_BUF_SIZE * sizeof(lv_color_t), MALLOC_CAP_DMA);
    lv_color_t* buf2 = heap_caps_malloc(DISP_BUF_SIZE * sizeof(lv_color_t), MALLOC_CAP_DMA);

    static lv_disp_draw_buf_t disp_buf;

    uint32_t size_in_px = DISP_BUF_SIZE;

    lv_disp_draw_buf_init(&disp_buf, buf1, buf2, size_in_px);

    lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);
    disp_drv.hor_res = SCREEN_WIDTH;
    disp_drv.ver_res = SCREEN_HEIGHT;
    disp_drv.flush_cb = disp_driver_flush;
    disp_drv.draw_buf = &disp_buf;
    lv_disp_drv_register(&disp_drv);

    lv_indev_drv_t indev_drv;
    lv_indev_drv_init(&indev_drv);
    indev_drv.read_cb = touch_driver_read;
    indev_drv.type = LV_INDEV_TYPE_POINTER;
    lv_indev_drv_register(&indev_drv);

    const esp_timer_create_args_t periodic_timer_tick_args = {
            .callback = &lv_tick_callback,
            .name = "periodic_tick"
    };
    esp_timer_handle_t periodic_timer_tick;
    esp_timer_create(&periodic_timer_tick_args, &periodic_timer_tick);
    esp_timer_start_periodic(periodic_timer_tick, LV_TICK_PERIOD_MS * 1000);

    ui_init();

    lv_obj_add_event_cb(ui_amplitude, ampEventCallback, LV_EVENT_VALUE_CHANGED, NULL);
    lv_obj_add_event_cb(ui_frequency, freEventCallback, LV_EVENT_VALUE_CHANGED, NULL);
    lv_obj_add_event_cb(ui_Button, buttonEventCallback, LV_EVENT_CLICKED, NULL);

    xTaskCreatePinnedToCore(guiRefreshTask, "guiRefreshTask", 1024*5, NULL, 2, NULL, 1);

    for (;;) {
        vTaskDelay(pdMS_TO_TICKS(5));

        /* Try to take the semaphore, call lvgl related function on success */
        if (xSemaphoreTake(guiMutex, portMAX_DELAY)) {
            lv_task_handler();
            xSemaphoreGive(guiMutex);
       }
    }
}
