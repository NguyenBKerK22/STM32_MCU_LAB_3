/*
 * fsm_autorun.c
 *
 *  Created on: Oct 31, 2024
 *      Author: ADMIN
 */
#include "global.h"
#include "fsm_autorun.h"
int status = INIT;
int index_led = 0;
void fsm_autorun(){
	switch(status){
	case INIT:
		status = RED_GREEN;
		setTimer(1, 1000*red_time);
		setTimer(2, 1000*green_time);
		setTimer(3,250);
		setTimer(4,1000);
		break;
	case RED_GREEN:
		led_red_and_green();
		if(flag_timer[2] == 1){
			status = RED_YELLOW;
			setTimer(2, 1000*yellow_time);
			update7SegBuffer(2, yellow_time/10);
			update7SegBuffer(3, yellow_time%10);
		}
		break;
	case RED_YELLOW:
		led_red_and_yellow();
		if(flag_timer[2] == 1){
			status = GREEN_RED;
			setTimer(1,1000*green_time);
			setTimer(2, 1000*red_time);
			update7SegBuffer(0, green_time/10);
			update7SegBuffer(1, green_time%10);
			update7SegBuffer(2, red_time/10);
			update7SegBuffer(3, red_time%10);
		}
		break;
	case YELLOW_RED:
		led_yellow_and_red();
		if(flag_timer[1] ==1){
			status = RED_GREEN;
			setTimer(1,1000*red_time);
			setTimer(2,1000*green_time);
			update7SegBuffer(0, red_time/10);
			update7SegBuffer(1, red_time%10);
			update7SegBuffer(2, green_time/10);
			update7SegBuffer(3, green_time%10);
		}
		break;
	case GREEN_RED:
		led_green_and_red();
		if(flag_timer[1] == 1){
			status = YELLOW_RED;
			setTimer(1,1000*yellow_time);
			update7SegBuffer(0, yellow_time/10);
			update7SegBuffer(1, yellow_time%10);
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
	if(flag_timer[4] == 1){
		update7SegBuffer(1,led_buffer[1]-1);
		update7SegBuffer(3, led_buffer[3]-1);
		setTimer(4,1000);
	}
}

