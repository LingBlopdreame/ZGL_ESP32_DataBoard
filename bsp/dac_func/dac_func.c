/*
 * @: Copyright (c) 2021 LingBlopdreame Co., Ltd. All rights reserved
 * @Author: LingBlopdreame
 * @Date: 2022-07-07 13:59:11
 * @LastEditors: LingBlopdreame
 * @LastEditTime: 2022-07-07 16:24:27
 * @FilePath: \ESP32\bsp\dac_func\dac_func.c
 * @Description: 
 */
#include "dac_func.h"

dac_cw_config_t dac_config = {
    .en_ch = DAC_CHANNEL_1,
    .scale = DAC_CW_SCALE_1,
    .phase = DAC_CW_PHASE_0,
    .freq  = 130
};

void DAC_init(dac_channel_t channel, dac_cw_scale_t scale, dac_cw_phase_t phase, uint16_t freq) {
    dac_config.en_ch = channel;
    dac_config.scale = scale;
    dac_config.phase = phase;
    dac_config.freq  = freq;

    dac_cw_generator_config(&dac_config);
    dac_cw_generator_enable();
}

void DAC_setConfig(dac_channel_t channel, dac_cw_scale_t scale, dac_cw_phase_t phase, uint16_t freq) {
    dac_config.en_ch = channel;
    dac_config.scale = scale;
    dac_config.phase = phase;
    dac_config.freq  = freq;

    dac_cw_generator_config(&dac_config);
}
