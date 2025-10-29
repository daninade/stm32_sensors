/*
 * led.c
 *
 *  Created on: Feb 27, 2025
 *      Author: dani
 */

#include "led.h"

void led_init(LED_HandleTypeDef *hled)
{
	HAL_GPIO_WritePin(hled->GPIO_Port, hled->GPIO_Pin, GPIO_PIN_RESET);
}

void led_on(LED_HandleTypeDef *hled)
{
	HAL_GPIO_WritePin(hled->GPIO_Port, hled->GPIO_Pin, GPIO_PIN_SET);
}

void led_off(LED_HandleTypeDef *hled)
{
	HAL_GPIO_WritePin(hled->GPIO_Port, hled->GPIO_Pin, GPIO_PIN_RESET);
}

void toggle_led(LED_HandleTypeDef *hled)
{
	HAL_GPIO_TogglePin(hled->GPIO_Port, hled->GPIO_Pin);
}

uint8_t get_led_state(LED_HandleTypeDef *hled)
{
	return HAL_GPIO_ReadPin(hled->GPIO_Port, hled->GPIO_Pin);
}
