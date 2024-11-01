/*
 * fsm_manual.c
 *
 *  Created on: Nov 1, 2024
 *      Author: ADMIN
 */
#include "global.h"
#include "fsm_manual.h"
void fsm_manual(){
	if((button_flag[0]==1) && (status_fsm >= RED_GREEN_MANUAL) && (status_fsm <= YELLOW_RED_MANUAL)){
		status_fsm = INIT_SETTING;
		button_flag[0] = 0;
	}
	switch(status_fsm){
	case RED_GREEN_MANUAL:
		led_red_and_green();
		if(isButtonPressed(1)){
			status_fsm = RED_YELLOW_MANUAL;
		}
		break;
	case RED_YELLOW_MANUAL:
		led_red_and_yellow();
		if(isButtonPressed(1)){
			status_fsm = GREEN_RED_MANUAL;
		}
		break;
	case GREEN_RED_MANUAL:
		led_green_and_red();
		if(isButtonPressed(1)){
			status_fsm = YELLOW_RED_MANUAL;
		}
		break;
	case YELLOW_RED_MANUAL:
		led_yellow_and_red();
		if(isButtonPressed(1)){
			status_fsm = RED_GREEN_MANUAL;
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

