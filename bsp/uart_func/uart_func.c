/*
 * @: Copyright (c) 2021 LingBlopdreame Co., Ltd. All rights reserved
 * @Author: LingBlopdreame
 * @Date: 2022-07-07 14:05:31
 * @LastEditors: LingBlopdreame
 * @LastEditTime: 2022-07-07 16:24:01
 * @FilePath: \ESP32\bsp\uart_func\uart_func.c
 * @Description: 
 */
#include "uart_func.h"


void UART_init(void) {
    uart_config_t uart_config;
    
    uart_config.baud_rate  = 115200;
    uart_config.data_bits  = UART_DATA_8_BITS;
    uart_config.flow_ctrl  = UART_HW_FLOWCTRL_DISABLE;
    uart_config.parity     = UART_PARITY_DISABLE;
    uart_config.stop_bits  = UART_STOP_BITS_1;
    uart_config.source_clk = UART_SCLK_APB;

    uart_param_config(UART_NUM_0, &uart_config);
    uart_set_pin(UART_NUM_0, 1, 3, UART_PIN_NO_CHANGE, UART_PIN_NO_CHANGE);
    uart_driver_install(UART_NUM_0, RX_BUFF_SIZE, 0, 0, NULL, 0);
}
