#ifndef __LED_H__
#define __LED_H__

#include "main.h"

enum led {
	LED_OFF = 0,
	LED_ON = 1
};


typedef struct {
    GPIO_TypeDef *GPIO_Port;
    uint16_t GPIO_Pin;
    GPIO_PinState ActiveState;
} LED_HandleTypeDef;


void led_init(LED_HandleTypeDef *hled);
void led_on(LED_HandleTypeDef *hled);
void led_off(LED_HandleTypeDef *hled);
void toggle_led(LED_HandleTypeDef *hled);

uint8_t get_led_state(LED_HandleTypeDef *hled);

#endif
