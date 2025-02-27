/*
 * servomotor.c
 *
 *  Created on: Feb 27, 2025
 *      Author: dani
 */

#include "servomotor.h"

// Orange: PWM, Red: 5V, Yellow: GND
// 0º -> 1.5ms pulse
// 90º -> 2ms pulse
// -90º -> 1ms pulse
// Duty cycle: 1-2ms
// Period: 20ms
// Frequency: 50Hz

// generar pwm
//

extern TIM_HandleTypeDef htim2;


void init_servo() {

}

void turnLeft() {
	 htim2.Instance->CCR1 = 750;  // duty cycle is 1.5 ms

}

void turnRight() {
	 htim2.Instance->CCR1 = 1000;  // duty cycle is 2.5 ms
}

void reset_position() {
	htim2.Instance->CCR1 = 500;  // duty cycle is .5 ms
}
