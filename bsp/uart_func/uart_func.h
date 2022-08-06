/*
 * @: Copyright (c) 2021 LingBlopdreame Co., Ltd. All rights reserved
 * @Author: LingBlopdreame
 * @Date: 2022-07-07 14:05:42
 * @LastEditors: LingBlopdreame
 * @LastEditTime: 2022-07-07 17:07:25
 * @FilePath: \ESP32\bsp\uart_func\uart_func.h
 * @Description: 
 */
#ifndef __UART_FUNC_H_
#define __UART_FUNC_H_

#include <stdio.h>

#include "esp_log.h"
#include "esp_err.h"

#include "driver/uart.h"

#define RX_BUFF_SIZE    (1024*2)

void UART_init(void);

#endif
