#include "main.h"

enum led {
	LED_OFF = 0,
	LED_ON = 1
};

uint8_t led_state = LED_OFF;

void led_on();
void led_off();
void toggle_led();

uint8_t get_led_state();
