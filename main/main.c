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

SemaphoreHandle_t connectStatusMutex;
SemaphoreHandle_t ssidInfoMutex;
SemaphoreHandle_t connectSemphr;
SemaphoreHandle_t ssidRefreshSemphr;
SemaphoreHandle_t ssidRefreshedSemphr;
SemaphoreHandle_t ssidRequestSemphr;
QueueHandle_t ssidResponseQueue;

void app_main(void) {
    ESP_LOGI(TAG, "[APP] Free memory: %d bytes", esp_get_free_heap_size());

    connectStatusMutex = xSemaphoreCreateMutex();
    ssidInfoMutex = xSemaphoreCreateMutex();
    connectSemphr = xSemaphoreCreateBinary();
    ssidRefreshSemphr = xSemaphoreCreateBinary();
    ssidRefreshedSemphr = xSemaphoreCreateBinary();
    ssidRequestSemphr = xSemaphoreCreateBinary();
    ssidResponseQueue = xQueueCreate(1, sizeof(info_t));

    xTaskCreatePinnedToCore(guiTask, "gui task", 4096*10, NULL, 0, NULL, 1);
    xTaskCreatePinnedToCore(wifiTask, "wifi task", 4096, NULL, 0, NULL, 0);

    ESP_LOGI(TAG, "[APP] Free memory: %d bytes", esp_get_free_heap_size());
}
