/*
 * led7_segment.h
 *
 *  Created on: Oct 27, 2024
 *      Author: ADMIN
 */

#ifndef INC_LED7_SEGMENT_H_
#define INC_LED7_SEGMENT_H_
extern int led_buffer[4];
void display7SEG(int num);
void update7SEG(int index);
void update7SegBuffer(int index,int value);
#endif /* INC_LED7_SEGMENT_H_ */
