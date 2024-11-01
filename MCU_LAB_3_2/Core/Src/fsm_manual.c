/*
 * fsm_manual.c
 *
 *  Created on: Nov 1, 2024
 *      Author: ADMIN
 */
#include "global.h"
#include "fsm_manual.h"
int red_time_increase = 0;
int green_time_increase = 0;
int yellow_time_increase = 0;
void fsm_manual(){
	switch(status_fsm){
	case INIT_MANUAL:
		red_time_increase = 0;
		green_time_increase = 0;
		yellow_time_increase = 0;
		button_flag[0] = 0;
		index_led = 0;

		status_fsm = RED_MANUAL;

		all_led_red_on();
		all_led_yellow_off();
		all_led_green_off();

		setTimer(3,250);
		setTimer(4,500);

		update7SegBuffer(0,(red_time_increase + red_time)/10);
		update7SegBuffer(1,(red_time_increase + red_time)%10);
		update7SegBuffer(2, 0);
		update7SegBuffer(3, 2);
		break;
	case RED_MANUAL:
		if(isButtonPressed(0)){
			status_fsm = GREEN_MANUAL;

			all_led_red_off();
			all_led_green_on();

			update7SegBuffer(0,(green_time_increase + green_time)/10);
			update7SegBuffer(1,(green_time_increase + green_time)%10);
			update7SegBuffer(2, 0);
			update7SegBuffer(3, 3);
		}
		if(isButtonPressed(1)){
			red_time_increase++;
			if(red_time_increase + red_time >= 99) {
				red_time_increase = 0 - red_time;
			}
			update7SegBuffer(0,(red_time_increase + red_time)/10);
			update7SegBuffer(1,(red_time_increase + red_time)%10);
		}
		if(isButtonPressed(2)){
			red_time += red_time_increase;
			red_time_increase = 0;
			update7SegBuffer(0,(red_time)/10);
			update7SegBuffer(1,(red_time)%10);
		}
		if(flag_timer[4] == 1){
			HAL_GPIO_TogglePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin);
			HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
			setTimer(4,500);
		}
		break;
	case GREEN_MANUAL:
		if(isButtonPressed(0)){
			status_fsm = YELLOW_MANUAL;

			all_led_green_off();
			all_led_yellow_on();

			update7SegBuffer(0, yellow_time/10);
			update7SegBuffer(1, yellow_time%10);
			update7SegBuffer(2, 0);
			update7SegBuffer(3, 4);
		}
		if(isButtonPressed(1)){
			green_time_increase++;
			if(green_time_increase + green_time >= 99) {
				green_time_increase = 0 - green_time;
			}
			update7SegBuffer(0,(green_time_increase + green_time)/10);
			update7SegBuffer(1,(green_time_increase + green_time)%10);
		}
		if(isButtonPressed(2)){
			green_time += green_time_increase;
			green_time_increase = 0;
			update7SegBuffer(0,(green_time_increase + green_time)/10);
			update7SegBuffer(1,(green_time_increase + green_time)%10);
		}
		if(flag_timer[4] == 1){
			HAL_GPIO_TogglePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin);
			HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin);
			setTimer(4,500);
		}
		break;
	case YELLOW_MANUAL:
		if(isButtonPressed(0)){
			all_led_yellow_off();
			status_fsm = INIT;
		}
		if(isButtonPressed(1)){
			yellow_time_increase++;
			if(yellow_time_increase + yellow_time >= 99) {
				yellow_time_increase = 0 - yellow_time;
			}
			update7SegBuffer(0,(yellow_time_increase + yellow_time)/10);
			update7SegBuffer(1,(yellow_time_increase + yellow_time)%10);
		}
		if(isButtonPressed(2)){
			yellow_time += yellow_time_increase;
			yellow_time_increase = 0;
			update7SegBuffer(0,yellow_time/10);
			update7SegBuffer(1,yellow_time%10);

		}
		if(flag_timer[4] == 1){
			HAL_GPIO_TogglePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin);
			HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
			setTimer(4,500);
		}
		break;
	default:
		break;
	}
	if(flag_timer[3] == 1){
		update7SEG(index_led++);
		index_led%=4;
		setTimer(3,250);
	}
}

