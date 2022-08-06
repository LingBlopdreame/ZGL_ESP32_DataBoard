/*
 * Copyright (c) 2021 LingBlopdreame Co., Ltd. All rights reserved
 * Author: LingBlopdreame
 * LastEditors: LingBlopdreame
 * FilePath: \ESP32\bsp\adc_func\adc_func.c
 * Description: 
 */
#include "adc_func.h"

static const char *ADC_TAG = "ADC_TAG";
esp_adc_cal_characteristics_t *chars;


/** 
 * @description: 
 * @param esp_adc_cal_value_t val_type
 * @return *
 */
static void print_char_val_type(esp_adc_cal_value_t val_type) {
    if (val_type == ESP_ADC_CAL_VAL_EFUSE_TP) {
        ESP_LOGI(ADC_TAG, "Characterized using Two Point Value\r\n");
    } else if (val_type == ESP_ADC_CAL_VAL_EFUSE_VREF) {
        ESP_LOGI(ADC_TAG, "Characterized using eFuse Vref\r\n");
    } else {
        ESP_LOGI(ADC_TAG, "Characterized using Default Vref\r\n");
    }
}

void ADC_init(adc1_channel_t *channel, uint8_t channel_number, adc_bits_width_t width_bit, adc_atten_t atten) {
    if (esp_adc_cal_check_efuse(ESP_ADC_CAL_VAL_EFUSE_VREF) == ESP_OK) {
        ESP_LOGI(ADC_TAG, "eFuse Vref: Supported\r\n");
    } else {
        ESP_LOGI(ADC_TAG, "eFuse Vref: NOT supported\r\n");
    }

    adc1_config_width(width_bit);
    for (uint8_t i = 0; i < channel_number; i++) {
        adc1_config_channel_atten(channel[i], atten);
    }

    chars = (esp_adc_cal_characteristics_t*)calloc(1, sizeof(esp_adc_cal_characteristics_t));
    esp_adc_cal_value_t val_type = esp_adc_cal_characterize(ADC_UNIT_1, atten, width_bit, DEFAULT_VREF, chars);
    print_char_val_type(val_type);
}

/**
 * @description: 
 * @param adc1_channel_t channel
 * @return *
 */
inline uint32_t ADC_readVoltage(adc1_channel_t channel) {
    return esp_adc_cal_raw_to_voltage(adc1_get_raw(channel), chars);
}
