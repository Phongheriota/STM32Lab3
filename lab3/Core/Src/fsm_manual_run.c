/*
 * fsm_manual_run.c
 *
 *  Created on: Dec 4, 2024
 *      Author: phong
 */

#include "fsm_manual_run.h"
#include "global.h"
int index2;
 void fsm_manual_run()
 {
	 switch (status)
	 {
	 case SET_RED:
		 updateled(1, red_sec);
		 if(timer_flag2==1)
		 {
			 update7SEG(index2++);
			 if(index2>1)index2=0;
			 setTimer2(250);
		 }
		 if(timer_flag1==1)
		 {
			HAL_GPIO_TogglePin(RED1_GPIO_Port, RED1_Pin);
			HAL_GPIO_TogglePin(RED2_GPIO_Port, RED2_Pin);
			setTimer1(500);
		 }
		 if(timer_flag==1)
		 {
			 status=RED_GRE;
			 setTimer(gre_sec*1000);
		 }
		 if(isButton1Pressed()==1)
		 {
			 all_led_off();
			 status=SET_YEL;
			 setTimer(10000);
			 setTimer1(500);
			 setTimer2(250);
		 }
		 if(isButton2Pressed())
		 {
			 red_sec++;
			 if(red_sec>99) red_sec=1;
			 setTimer(10000);
			 setTimer2(250);
		 }
			if(isbutton3Pressed())
			{
				gre_sec=red_sec -yel_sec;
			}
		 break;
	 case SET_YEL:
		 updateled(2, yel_sec);
		 if(timer_flag2==1)
		 {
			 update7SEG(index2++);
			 if(index2>1)index2=0;
			 setTimer2(250);
		 }
		 if(timer_flag1==1)
		 {
			HAL_GPIO_TogglePin(YEL1_GPIO_Port, YEL1_Pin);
			HAL_GPIO_TogglePin(YEL2_GPIO_Port, YEL2_Pin);
			setTimer1(500);
		 }
		 if(timer_flag==1)
		 {
			 status=RED_GRE;
			 setTimer(5000);
		 }
		 if(isButton1Pressed()==1)
		 {
			 all_led_off();
			 status=SET_GRE;
			 setTimer(10000);
			 setTimer1(500);
			 setTimer2(250);
		 }
		 if(isButton2Pressed())
		 {
			 yel_sec++;
			 if(yel_sec>99) red_sec=1;
			 setTimer(10000);
			 setTimer2(250);
		 }
		if(isbutton3Pressed())
			{
				gre_sec=red_sec -yel_sec;
			}
		 break;
	 case SET_GRE:
		 updateled(3, gre_sec);
		 if(timer_flag2==1)
		 {
			 update7SEG(index2++);
			 if(index2>1)index2=0;
			 setTimer2(250);
		 }
		 if(timer_flag1==1)
		 {
			HAL_GPIO_TogglePin(GRE1_GPIO_Port, GRE1_Pin);
			HAL_GPIO_TogglePin(GRE2_GPIO_Port, GRE2_Pin);
			setTimer1(500);
		 }
		 if(timer_flag==1)
		 {
			 status=RED_GRE;
			 setTimer(5000);
		 }
		 if(isButton1Pressed()==1)
		 {
			 all_led_off();
			 status=SET_RED;
			 setTimer(10000);
			 setTimer1(500);
			 setTimer2(250);
		 }
		 if(isButton2Pressed())
		 {
			 gre_sec++;
			 if(gre_sec>99) gre_sec=1;
			 setTimer(10000);
			 setTimer2(250);
		 }
			if(isbutton3Pressed())
			{
				red_sec=gre_sec+yel_sec;
			}
		 break;
	 default:
		 break;
	 }
 }
