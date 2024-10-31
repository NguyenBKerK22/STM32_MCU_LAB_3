/*
 * timer.h
 *
 *  Created on: Oct 27, 2024
 *      Author: ADMIN
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_
#define TICK 10
extern int software_timer[10];
extern int flag_timer[10];
void setTimer(int index,int duration);
void timerRun();
#endif /* INC_TIMER_H_ */
