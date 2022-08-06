/*
 * Copyright (c) 2021 LingBlopdreame Co., Ltd. All rights reserved
 * Author: LingBlopdreame
 * Date: 2022-07-07 13:59:31
 * LastEditors: LingBlopdreame
 * LastEditTime: 2022-07-21 22:05:05
 * FilePath: \ESP32\bsp\adc_func\adc_func.h
 * Description:
 */
#ifndef __ADC_FUNC_H_
#define __ADC_FUNC_H_

#include <stdio.h>

#include "esp_log.h"
#include "esp_err.h"

#include "driver/adc.h"
#include "esp_adc_cal.h"

#define DEFAULT_VREF    1100 

void ADC_init(adc1_channel_t *channel, uint8_t channel_number, adc_bits_width_t width_bit, adc_atten_t atten);
uint32_t ADC_readVoltage(adc1_channel_t channel);

#endif
