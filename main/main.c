/*
 * Copyright (c) 2022 by LingBlopdreame, All rights reserved.
 * Author: LingBlopdreame
 * LastEditors: LingBlopdreame
 * FilePath:
 * Description:
 */
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"
#include "freertos/queue.h"

#include "esp_log.h"

#include "main.h"
#include "infoType.h"

#include "guiTask.h"
#include "wifiTask.h"

static const char *TAG = "APP";

adc1_channel_t adcChannel[2] = {
//      ADC1_CHANNEL_0,  /*!< ADC1 channel 0 is GPIO36 */
//      ADC1_CHANNEL_3,  /*!< ADC1 channel 3 is GPIO39 */
//      ADC1_CHANNEL_4,  /*!< ADC1 channel 4 is GPIO32 */
//      ADC1_CHANNEL_5,  /*!< ADC1 channel 5 is GPIO33 */
    ADC1_CHANNEL_6,  /*!< ADC1 channel 6 is GPIO34 */
    ADC1_CHANNEL_7   /*!< ADC1 channel 7 is GPIO35 */
};

SemaphoreHandle_t wifiConnectStatusMutex;
SemaphoreHandle_t mqttConnectStatusMutex;
SemaphoreHandle_t adcMutex;
SemaphoreHandle_t ssidInfoMutex;
SemaphoreHandle_t connectSemphr;
SemaphoreHandle_t ssidRefreshSemphr;
SemaphoreHandle_t ssidRefreshedSemphr;
SemaphoreHandle_t ssidRequestSemphr;
QueueHandle_t ssidResponseQueue;

void app_main(void) {
    ESP_LOGI(TAG, "[APP] Free memory: %d bytes", esp_get_free_heap_size());

    wifiConnectStatusMutex = xSemaphoreCreateMutex();
    mqttConnectStatusMutex = xSemaphoreCreateMutex();
    adcMutex = xSemaphoreCreateMutex();
    ssidInfoMutex = xSemaphoreCreateMutex();
    connectSemphr = xSemaphoreCreateBinary();
    ssidRefreshSemphr = xSemaphoreCreateBinary();
    ssidRefreshedSemphr = xSemaphoreCreateBinary();
    ssidRequestSemphr = xSemaphoreCreateBinary();
    ssidResponseQueue = xQueueCreate(1, sizeof(info_t));

    ADC_init(adcChannel, 2, ADC_WIDTH_12Bit, ADC_ATTEN_11db);

    xTaskCreatePinnedToCore(guiTask, "gui task", 4096*10, NULL, 0, NULL, 1);
    xTaskCreatePinnedToCore(wifiTask, "wifi task", 4096, NULL, 0, NULL, 0);

    ESP_LOGI(TAG, "[APP] Free memory: %d bytes", esp_get_free_heap_size());
}
