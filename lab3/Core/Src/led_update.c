/*
 * led_update.c
 *
 *  Created on: Dec 4, 2024
 *      Author: phong
 */

#include "led_update.h"
#include "global.h"
int MAX_LED=2;
int index=0;
int led_buffer[4]={1,2,3,4};

void update7SEG (int index ) {
	switch(index)
	{
	case 0:
		display7SEG1(led_buffer[0]);
		display7SEG2(led_buffer[2]);
		open7segNumber(index);
		break;
	case 1:
		display7SEG1(led_buffer[1]);
		display7SEG2(led_buffer[3]);
		open7segNumber(index);
		break;
	}
}
void updateled(int s1,int s2)
{
	led_buffer[0]=s1/10;
	led_buffer[1]=s1%10;
	led_buffer[2]=s2/10;
	led_buffer[3]=s2%10;
}
