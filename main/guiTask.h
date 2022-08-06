/*
 * Copyright (c) 2022 by LingBlopdreame, All rights reserved.
 * Author: LingBlopdreame
 * LastEditors: LingBlopdreame
 * FilePath: 
 * Description: 
 */
#ifndef __ESP32_GUITASK_H_
#define __ESP32_GUITASK_H_

#define SCREEN_WIDTH    480
#define SCREEN_HEIGHT   320

#define LV_TICK_PERIOD_MS   1
#define LV_TASK_PERIOD_MS   5

void guiTask(void *pvParameters);

#endif // __ESP32_GUITASK_H_
