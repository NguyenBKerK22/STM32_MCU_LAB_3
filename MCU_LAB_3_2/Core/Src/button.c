/*
 * button.c
 *
 *  Created on: Oct 29, 2024
 *      Author: ADMIN
 */
#include "button.h"
int KeyReg[10] = {0};
int TimeOutForKeyPress =  500;
int button_long_pressed[10]={0};
int button_flag[10]={0};
int state[10] = {0};
int isButtonPressed(int index){
	if(button_flag[index] == 1){
		button_flag[index] = 0;
		return 1;
	}
	return 0;
}

int isButtonLongPressed(int index){
	if(button_long_pressed[index] == 1){
		button_long_pressed[index] = 0;
		return 1;
	}
	return 0;
}

void getKeyInput(){
//  KeyReg2 = KeyReg1;
//  KeyReg1 = KeyReg0;
  KeyReg[0] = HAL_GPIO_ReadPin(BUTTON1_GPIO_Port, BUTTON1_Pin);
  KeyReg[1] = HAL_GPIO_ReadPin(BUTTON2_GPIO_Port, BUTTON2_Pin);
  KeyReg[2] = HAL_GPIO_ReadPin(BUTTON3_GPIO_Port, BUTTON3_Pin);
//  KeyReg[3] = HAL_GPIO_ReadPin(BUTTON4_GPIO_Port, BUTTON4_Pin);
//  KeyReg[4] = HAL_GPIO_ReadPin(BUTTON5_GPIO_Port, BUTTON5_Pin);
//  KeyReg[5] = HAL_GPIO_ReadPin(BUTTON6_GPIO_Port, BUTTON6_Pin);
//  KeyReg[6] = HAL_GPIO_ReadPin(BUTTON7_GPIO_Port, BUTTON7_Pin);
//  KeyReg[7] = HAL_GPIO_ReadPin(BUTTON8_GPIO_Port, BUTTON8_Pin);
//  KeyReg[8] = HAL_GPIO_ReadPin(BUTTON9_GPIO_Port, BUTTON9_Pin);
//  KeyReg[9] = HAL_GPIO_ReadPin(BUTTON10_GPIO_Port, BUTTON10_Pin);
  for(int i=0;i<3;i++){
	  switch(state[i]){
	  	case 0:	// KeyReg2 == NORMAL_STATE && KeyReg1 == NORMAL_STATE
		  button_flag[i] = 0;
		  if(KeyReg[i] == PRESSED_STATE) state[i] = 1;
			break;
		case 1:	// KeyReg2 == NORMAL_STATE && KeyReg1 == PRESSED_STATE
			if (KeyReg[i] == PRESSED_STATE)
				state[i] = 3;
			else
				state[i] = 2;
			break;
		case 2:	// KeyReg2 == PRESSED_STATE && KeyReg1 == NORMAL_STATE
			if (KeyReg[i] == PRESSED_STATE)
				state[i] = 1;
			else
				state[i] = 0;
			break;
		case 3:	// KeyReg2 == PRESSED_STATE && KeyReg1 == PRESSED_STATE
			if (KeyReg[i] == PRESSED_STATE) {
				button_flag[i] = 1;
				TimeOutForKeyPress = 500;
				state[i] = 4;
			} else
				state[i] = 1;
			break;
		case 4: // KeyReg2 == NORMAL_STATE && KeyReg1 == NORMAL_STATE && KeyReg0 = PRESSED_STATE
			if (KeyReg[i] != PRESSED_STATE) {
				state[i] = 1;
				break;
			}
			TimeOutForKeyPress--;
			if (TimeOutForKeyPress == 0) button_long_pressed[i] = 1;
			break;
		default:
			break;
	  }
  }
}


