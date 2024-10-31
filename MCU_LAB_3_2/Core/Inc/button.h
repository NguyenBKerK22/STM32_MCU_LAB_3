/*
 * button.h
 *
 *  Created on: Oct 29, 2024
 *      Author: ADMIN
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"
#define NORMAL_STATE 1
#define PRESSED_STATE 0
extern int KeyReg[10];
extern int TimeOutForKeyPress;
extern int button_long_pressed[10];
extern int button_flag[10];
extern int state[10];
int isButtonPressed(int index);
int isButtonLongPressed(int index);
void getKeyInput();


#endif /* INC_BUTTON_H_ */
