/*
 * timer.c
 *
 *  Created on: Oct 27, 2024
 *      Author: ADMIN
 */
#include "timer.h"
int software_timer[10] = {0};
int flag_timer[10] = {0};
void setTimer(int index,int duration){
	software_timer[index] = duration/TICK;
	flag_timer[index] = 0;
}
void timerRun(){
	for(int i=0;i<10;i++){
		software_timer[i]--;
		if(software_timer[i] <= 0){
			software_timer[i] = 0;
			flag_timer[i] = 1;
		}
	}
}
