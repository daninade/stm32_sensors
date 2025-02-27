/*
 * led.c
 *
 *  Created on: Feb 27, 2025
 *      Author: dani
 */

#include "led.h"

void led_on() {
	HAL_GPIO_WritePin(LED_PIN_GPIO_Port, LED_PIN_Pin, GPIO_PIN_SET);
}

void led_off() {
	HAL_GPIO_WritePin(LED_PIN_GPIO_Port, LED_PIN_Pin, GPIO_PIN_RESET);
}

void toggle_led() {
	HAL_GPIO_TogglePin(LED_PIN_GPIO_Port, LED_PIN_Pin);
}

uint8_t get_led_state(){
	return HAL_GPIO_ReadPin(LED_PIN_GPIO_Port, LED_PIN_Pin);
}
