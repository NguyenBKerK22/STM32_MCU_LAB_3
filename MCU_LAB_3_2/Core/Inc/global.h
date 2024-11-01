/*
 * global.h
 *
 *  Created on: Oct 30, 2024
 *      Author: ADMIN
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_
// State of FSM autorun
//---------------------------------------------------
#define RED_GREEN 0
#define RED_YELLOW 1
#define GREEN_RED 2
#define YELLOW_RED 3
#define INIT 4
//---------------------------------------------------
// State of FSM Manual
//---------------------------------------------------
#define RED_MANUAL 5
#define YELLOW_MANUAL 6
#define GREEN_MANUAL 7
#define INIT_MANUAL 8
//---------------------------------------------------

#include "led7_segment.h"
#include "light_traffic.h"
#include "timer.h"
#include "button.h"
#include "fsm_autorun.h"
#include "fsm_manual.h"

extern int red_time;
extern int yellow_time;
extern int green_time;
extern int status_fsm;
extern int index_led;
#endif /* INC_GLOBAL_H_ */
