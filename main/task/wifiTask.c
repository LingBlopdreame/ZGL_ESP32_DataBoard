/*
 * Copyright (c) 2022 by LingBlopdreame, All rights reserved.
 * Author: LingBlopdreame
 * LastEditors: LingBlopdreame
 * FilePath: 
 * Description: 
 */
#include "wifiTask.h"
#include "esp_wifi.h"
#include "esp_system.h"
#include "nvs_flash.h"
#include "esp_event.h"
#include "esp_netif.h"
#include "wifi_func.h"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"
#include "freertos/queue.h"

#include "lwip/sockets.h"
#include "lwip/dns.h"
#include "lwip/netdb.h"

#include "esp_log.h"
#include "mqtt_client.h"

#include "main.h"
#include "bsp.h"
#include "infoType.h"

#define DEFAULT_SCAN_LIST_SIZE 8

extern SemaphoreHandle_t wifiConnectStatusMutex;
extern SemaphoreHandle_t mqttConnectStatusMutex;
extern SemaphoreHandle_t adcMutex;
extern SemaphoreHandle_t ssidInfoMutex;
extern SemaphoreHandle_t connectSemphr;

extern SemaphoreHandle_t ssidRefreshSemphr;
extern SemaphoreHandle_t ssidRefreshedSemphr;
extern SemaphoreHandle_t ssidRequestSemphr;
extern QueueHandle_t ssidResponseQueue;

static const char *TAG = "MQTT";
static const char *TAG1 = "WiFi";
esp_mqtt_client_handle_t client;

uint16_t ap_count = 0;
wifi_ap_record_t ap_info[8];
extern adc1_channel_t adcChannel[2];
extern bool wifiConnectStatus;
extern dac_cw_config_t dac_config;

static void log_error_if_nonzero(const char *message, int error_code) {
    if (error_code != 0) {
        ESP_LOGE(TAG, "Last error %s: 0x%x", message, error_code);
    }
}

/**
 * @brief
 * @param handler_args
 * @param base
 * @param event_id
 * @param event_data
 * @return
 */
static void mqtt_event_handler(void *handler_args, esp_event_base_t base, int32_t event_id, void *event_data) {
    ESP_LOGD(TAG, "Event dispatched from event loop base=%s, event_id=%d", base, event_id);
    esp_mqtt_event_handle_t event = event_data;
    esp_mqtt_client_handle_t client = event->client;
    int msg_id;
    switch ((esp_mqtt_event_id_t)event_id) {
        case MQTT_EVENT_CONNECTED:
            ESP_LOGI(TAG, "MQTT_EVENT_CONNECTED");
            msg_id = esp_mqtt_client_publish(client, "esp32/log", "esp32 connect", 0, 0, 0);
            ESP_LOGI(TAG, "sent publish successful, msg_id=%d", msg_id);
            esp_mqtt_client_subscribe(client, "esp32/control", 0);
            ESP_LOGI(TAG, "[APP] Free memory: %d bytes", esp_get_free_heap_size());
            break;

        case MQTT_EVENT_DISCONNECTED:
            ESP_LOGI(TAG, "MQTT_EVENT_DISCONNECTED");
            break;

        case MQTT_EVENT_DATA:
            ESP_LOGI(TAG, "MQTT_EVENT_DATA");
            if (strcmp(event->topic, "esp32/control") == 0) {
                dac_config.en_ch = event->data[0];
                dac_config.scale = 4-event->data[1];
                dac_config.freq  = (event->data[2]<<8)|event->data[3];
                dac_cw_generator_config(&dac_config);
                if (event->data[4]) {
                    dac_output_enable(event->data[0]);
                } else {
                    dac_output_disable(event->data[0]);
                }
                printf("TOPIC=%.*s\r\n", event->topic_len, event->topic);
                printf("DATA len: %d, [%d, %d, %d, %d]\r\n", event->data_len, event->data[0], event->data[1], (event->data[2]<<8)|event->data[3], event->data[4]);
            }
            break;

        case MQTT_EVENT_ERROR:
            ESP_LOGI(TAG, "MQTT_EVENT_ERROR");
            if (event->error_handle->error_type == MQTT_ERROR_TYPE_TCP_TRANSPORT) {
                log_error_if_nonzero("reported from esp-tls", event->error_handle->esp_tls_last_esp_err);
                log_error_if_nonzero("reported from tls stack", event->error_handle->esp_tls_stack_err);
                log_error_if_nonzero("captured as transport's socket errno",  event->error_handle->esp_transport_sock_errno);
                ESP_LOGI(TAG, "Last errno string (%s)", strerror(event->error_handle->esp_transport_sock_errno));
            }
            break;

        default:
            ESP_LOGI(TAG, "Other event id:%d", event->event_id);
            break;
    }
}

/**
 * @brief
 */
static void mqtt_app_start(void) {
    esp_mqtt_client_config_t mqtt_cfg = {
        .uri = "mqtt://121.41.54.24:1883",
        .username = "Lingdreame",
        .password = "ytw3.14159261379"
    };

    client = esp_mqtt_client_init(&mqtt_cfg);
    /* The last argument may be used to pass data to the event handler, in this example mqtt_event_handler */
    esp_mqtt_client_register_event(client, ESP_EVENT_ANY_ID, mqtt_event_handler, NULL);
    esp_mqtt_client_start(client);
}

void refreshTask(void *pvParameters) {
    (void) pvParameters;
    for (;;) {
        vTaskDelay(100 / portTICK_PERIOD_MS);
        /*
        if (xSemaphoreTake(connectSemphr, 0)) {

            if (!wifiConnectStatus) {
                xSemaphoreGive(ssidRequestSemphr);
                info_t info;
                xQueueReceive(ssidResponseQueue, &info, portMAX_DELAY);

                memcpy(wifi_config.sta.ssid, info.ssid, 32);
                memcpy(wifi_config.sta.password, info.password, 64);
                ESP_LOGI("Core2", "ssid: %s, password: %s", wifi_config.sta.ssid, wifi_config.sta.password);
                esp_wifi_set_config(WIFI_IF_STA, &wifi_config);

                xSemaphoreTake(retryNumMutex, portMAX_DELAY);
                if (s_retry_num != 0 && s_retry_num < ESP_MAXIMUM_RETRY) {
                    s_retry_num = 0;
                } else if (s_retry_num >= ESP_MAXIMUM_RETRY) {
                    s_retry_num = 0;
                    esp_wifi_connect();
                } else {
                    esp_wifi_connect();
                }
                xSemaphoreGive(retryNumMutex);
                xSemaphoreGive(connectStatusMutex);
                EventBits_t bits = xEventGroupWaitBits(s_wifi_event_group,
                                                       WIFI_CONNECTED_BIT | WIFI_FAIL_BIT,
                                                       pdTRUE,
                                                       pdFALSE,
                                                       portMAX_DELAY);
                if (bits & WIFI_CONNECTED_BIT) {
                    ESP_LOGI(TAG0, "connected to ap SSID:%s password:%s",
                             wifi_config.sta.ssid, wifi_config.sta.password);
                } else if (bits & WIFI_FAIL_BIT) {
                    ESP_LOGI(TAG0, "Failed to connect to SSID:%s, password:%s",
                             wifi_config.sta.ssid, wifi_config.sta.password);
                } else {
                    ESP_LOGE(TAG0, "UNEXPECTED EVENT");
                }
            } else {
                disconnectFlag = true;
                if (esp_wifi_disconnect()) {
                    wifiConnectStatus = false;
                }
                xSemaphoreGive(connectStatusMutex);
            }
            ESP_LOGI("Core2", "execute connect");
        }

        ESP_LOGI("Core2", "get connect signal!");
        xSemaphoreTake(connectStatusMutex, 5);
        }
        */
        if (xSemaphoreTake(ssidRefreshSemphr, 0)) {
            if (xSemaphoreTake(ssidInfoMutex, portMAX_DELAY)) {
                uint16_t number = DEFAULT_SCAN_LIST_SIZE;
                memset(ap_info, 0, sizeof(ap_info));
                esp_wifi_scan_start(NULL, true);
                ESP_ERROR_CHECK(esp_wifi_scan_get_ap_records(&number, ap_info));
                ESP_ERROR_CHECK(esp_wifi_scan_get_ap_num(&ap_count));
                ESP_LOGI(TAG1, "Total APs scanned = %u", ap_count);
                xSemaphoreGive(ssidInfoMutex);
            }
            xSemaphoreGive(ssidRefreshedSemphr);
        }
    }
}

void mqttSendAdcValue(void) {
    if (xSemaphoreTake(mqttConnectStatusMutex, 5)) {
        uint32_t adcValues[2] = {0};
        for (uint8_t i = 0; i < 2; i++) {
            adcValues[i] = ADC_readVoltage(adcChannel[i]);
        }
        char *message;
        asprintf(&message, "channel6:%d;channel7:%d", adcValues[0], adcValues[1]);
        esp_mqtt_client_publish(client, "esp32/data", message, 0, 0, 0);
        free(message);
        xSemaphoreGive(mqttConnectStatusMutex);
    }
}


void wifiTask(void *pvParameters) {
    (void) pvParameters;
    ESP_ERROR_CHECK(nvs_flash_init());
    ESP_ERROR_CHECK(esp_netif_init());
    ESP_ERROR_CHECK(esp_event_loop_create_default());
    ESP_ERROR_CHECK(example_connect());

    if (xSemaphoreTake(wifiConnectStatusMutex, portMAX_DELAY)) {
        wifiConnectStatus = true;
        xSemaphoreGive(wifiConnectStatusMutex);
    }

    mqtt_app_start();

    xTaskCreatePinnedToCore(refreshTask, "refreshTask", 1024*4, NULL, 2, NULL, 0);

    for (;;) {
        vTaskDelay(pdMS_TO_TICKS(500));
        ESP_LOGI(TAG, "[APP] Free memory: %d bytes", esp_get_free_heap_size());
        if (xSemaphoreTake(adcMutex, portMAX_DELAY)) {
            mqttSendAdcValue();
            xSemaphoreGive(adcMutex);
        }
    }
}
