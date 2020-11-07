/*
 * uart_lib.cpp
 *
 *  Created on: Nov 6, 2020
 *      Author: reon
 */

#include <uart_lib.h>

UART_HandleTypeDef huart2;

unsigned char getc()
{
	unsigned char data[1] = {0};
	HAL_UART_Receive(&huart2, data, 1, 1000);
	return data[0];
}

void putc(unsigned char put_date)
{
	unsigned char data[1] = {0};
	data[0] = put_date;
	HAL_UART_Transmit(&huart2, data, 1, 1000);
}
