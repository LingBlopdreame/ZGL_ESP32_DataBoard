/*
 * @: Copyright (c) 2021 LingBlopdreame Co., Ltd. All rights reserved
 * @Author: LingBlopdreame
 * @Date: 2022-07-07 13:59:17
 * @LastEditors: LingBlopdreame
 * @LastEditTime: 2022-07-07 15:28:14
 * @FilePath: \ESP32\bsp\dac_func\dac_func.h
 * @Description: 
 */
#ifndef __DAC_FUNC_H_
#define __DAC_FUNC_H_

#include <stdio.h>

#include "esp_log.h"
#include "esp_err.h"

#include "driver/dac.h"

void DAC_init(dac_channel_t channel, dac_cw_scale_t scale, dac_cw_phase_t phase, uint16_t freq);

#endif
