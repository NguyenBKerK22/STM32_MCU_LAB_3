/*
 * led7_segment.c
 *
 *  Created on: Oct 27, 2024
 *      Author: ADMIN
 */
#include "main.h"
#include "timer.h"
#include "led7_segment.h"
int led_buffer[4] = {0,7,0,2};
void display7SEG(int num){
	switch(num){
	case 0:
		HAL_GPIO_WritePin(SEG0_GPIO_Port,SEG0_Pin,RESET); //a
		HAL_GPIO_WritePin(SEG1_GPIO_Port,SEG1_Pin,RESET); //b
		HAL_GPIO_WritePin(SEG2_GPIO_Port,SEG2_Pin,RESET);//c
		HAL_GPIO_WritePin(SEG3_GPIO_Port,SEG3_Pin,RESET);//d
		HAL_GPIO_WritePin(SEG4_GPIO_Port,SEG4_Pin,RESET); //e
		HAL_GPIO_WritePin(SEG5_GPIO_Port,SEG5_Pin,RESET); //f
		HAL_GPIO_WritePin(SEG6_GPIO_Port,SEG6_Pin,SET); //g
		break;
	case 1:
		HAL_GPIO_WritePin(SEG0_GPIO_Port,SEG0_Pin,SET); //a
		HAL_GPIO_WritePin(SEG1_GPIO_Port,SEG1_Pin,RESET); //b
		HAL_GPIO_WritePin(SEG2_GPIO_Port,SEG2_Pin,RESET);//c
		HAL_GPIO_WritePin(SEG3_GPIO_Port,SEG3_Pin,SET);//d
		HAL_GPIO_WritePin(SEG4_GPIO_Port,SEG4_Pin,SET); //e
		HAL_GPIO_WritePin(SEG5_GPIO_Port,SEG5_Pin,SET); //f
		HAL_GPIO_WritePin(SEG6_GPIO_Port,SEG6_Pin,SET); //g
		break;
	case 2:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET); //a
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET); //b
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET); //c
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET); //d
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET); //e
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET); //f
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET); //g
		break;
	case 3:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET); //a
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET); //b
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET); //c
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET); //d
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET); //e
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET); //f
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET); //g
		break;
	case 4:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET); //a
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET); //b
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET); //c
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET); //d
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET); //e
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET); //f
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET); //g
		break;
	case 5:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET); //a
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET); //b
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET); //c
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET); //d
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET); //e
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET); //f
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET); //g
		break;
	case 6:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET); //a
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET); //b
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET); //c
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET); //d
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET); //e
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET); //f
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET); //g
		break;
	case 7:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET); //a
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET); //b
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET); //c
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET); //d
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET); //e
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET); //f
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET); //g
		break;
	case 8:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET); //a
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET); //b
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET); //c
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET); //d
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET); //e
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET); //f
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET); //g
		break;
	case 9:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET); //a
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET); //b
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET); //c
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET); //d
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET); //e
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET); //f
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET); //g
		break;

	default:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET); //a
		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET); //b
		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET); //c
		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET); //d
		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET); //e
		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET); //f
		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET); //g
		break;
	}

}
void update7SEG(int index){
	switch (index){
	 	 case 0:
	 //Display the first 7SEG with led_buffer[0]
	 		 HAL_GPIO_WritePin(EN0_GPIO_Port,EN0_Pin,SET);
	 		 HAL_GPIO_WritePin(EN1_GPIO_Port,EN1_Pin,RESET);
	 		 HAL_GPIO_WritePin(EN2_GPIO_Port,EN2_Pin,RESET);
	 		 HAL_GPIO_WritePin(EN3_GPIO_Port,EN3_Pin,RESET);
	 		 break;
	 	 case 1:
	 //Display the second 7SEG with led_buffer[1]
	 		HAL_GPIO_WritePin(EN0_GPIO_Port,EN0_Pin,RESET);
	 		HAL_GPIO_WritePin(EN1_GPIO_Port,EN1_Pin,SET);
	 		HAL_GPIO_WritePin(EN2_GPIO_Port,EN2_Pin,RESET);
	 		HAL_GPIO_WritePin(EN3_GPIO_Port,EN3_Pin,RESET);

	 		 break;
	 	 case 2:
	 //Display the third 7SEG with led_buffer[2]
	 		HAL_GPIO_WritePin(EN0_GPIO_Port,EN0_Pin,RESET);
	 		HAL_GPIO_WritePin(EN1_GPIO_Port,EN1_Pin,RESET);
	 		HAL_GPIO_WritePin(EN2_GPIO_Port,EN2_Pin,SET);
	 		HAL_GPIO_WritePin(EN3_GPIO_Port,EN3_Pin,RESET);
	 		 break;
	 	 case 3:
	 //Display the forth 7SEG with led_buffer[3]
	 		HAL_GPIO_WritePin(EN0_GPIO_Port,EN0_Pin,RESET);
	 		HAL_GPIO_WritePin(EN1_GPIO_Port,EN1_Pin,RESET);
	 		HAL_GPIO_WritePin(EN2_GPIO_Port,EN2_Pin,RESET);
	 		HAL_GPIO_WritePin(EN3_GPIO_Port,EN3_Pin,SET);
	 		 break;
	 	 default:
	 		 break;
		}
		display7SEG(led_buffer[index]);
}
void update7SegBuffer(int index,int value){
	if(value <= 0){
		led_buffer[index] = 0;
	}
	else led_buffer[index] = value;
}
