/*
 * light_traffic.c
 *
 *  Created on: Oct 30, 2024
 *      Author: ADMIN
 */
#include "main.h"
#include "light_traffic.h"
#include "led7_segment.h"

void led_red_and_green(){
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port,LED_YELLOW_Pin,RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,LED_GREEN_Pin,RESET);
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);

	HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port,LED_YELLOW_2_Pin,RESET);
	HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, SET);
	HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, RESET);
}
void led_red_and_yellow(){
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port,LED_YELLOW_Pin,RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,LED_GREEN_Pin,RESET);
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);

	HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port,LED_YELLOW_2_Pin,SET);
	HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin,RESET);
	HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, RESET);
}
void led_green_and_red(){
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port,LED_YELLOW_Pin,RESET);
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,LED_GREEN_Pin,SET);

	HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port,LED_YELLOW_2_Pin,RESET);
	HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin,RESET);
	HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, SET);
}
void led_yellow_and_red(){
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port,LED_YELLOW_Pin,SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,LED_GREEN_Pin,RESET);
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);

	HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port,LED_YELLOW_2_Pin,RESET);
	HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, RESET);
	HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, SET);
}
void all_led_red_on(){
	HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin,SET);
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin,SET);
}
void all_led_red_off(){
	HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin,RESET);
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin,RESET);
}
void all_led_yellow_on(){
	HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin,SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin,SET);
}
void all_led_yellow_off(){
	HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin,RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin,RESET);
}
void all_led_green_on(){
	HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin,SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin,SET);
}
void all_led_green_off(){
	HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin,RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin,RESET);
}
