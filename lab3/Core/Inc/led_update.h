/*
 * led_update.h
 *
 *  Created on: Dec 4, 2024
 *      Author: phong
 */

#ifndef INC_LED_UPDATE_H_
#define INC_LED_UPDATE_H_

extern int MAX_LED;
extern int index;
extern int led_buffer[4];
extern int red_sec;
extern int yel_sec;
extern int gre_sec;
extern int x;
void update7SEG(int index);
void updateled(int s1,int s2);
#endif /* INC_LED_UPDATE_H_ */
