/*
 * automatic.c
 *
 *  Created on: Dec 4, 2024
 *      Author: phong
 */


#include "automatic.h"
int red_sec= 10;
int yel_sec= 2;
int gre_sec= 8;
extern	int count1=0;
extern	int count2=0;
extern  int index1=0;
  void fsm_automatic_run(){
	  switch(status){
	  case INIT:
		  //TODO
		  status=RED_GRE;
	  	  setTimer(gre_sec*1000);
	  	  setTimer1(1000);
	  	  setTimer2(250);
  		  count1=red_sec;
  		  count2=gre_sec;
	  	  if(isButton1Pressed())
	  	  {
	  		  all_led_off();
	  		  status=SET_RED;
	  		  setTimer(10000);
	  		  setTimer1(1000);
	  		  setTimer2(250);
	  	  }
  		  break;
  	  case RED_GRE:
  		  updateled(count1,count2);
  		  if(timer_flag2==1)
  		  {
  			 update7SEG(index1++);
  			if(index1>1)index1=0;
  			 setTimer2(250);
  		  }
  		  if(timer_flag1==1)
  		  {
  			  count1--;
  			  count2--;
  			  setTimer1(1000);
  		  }
		  HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, SET);
		  HAL_GPIO_WritePin(YEL1_GPIO_Port, YEL1_Pin, RESET);
		  HAL_GPIO_WritePin(GRE1_GPIO_Port, GRE1_Pin, RESET);
		  HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, RESET);
		  HAL_GPIO_WritePin(YEL2_GPIO_Port, YEL2_Pin, RESET);
		  HAL_GPIO_WritePin(GRE2_GPIO_Port, GRE2_Pin, SET);

		  if(timer_flag==1)
		  {
			  status=RED_YEL;
			  setTimer(yel_sec*1000);
		  	  setTimer1(1000);
		  	  setTimer2(250);
			  count2=yel_sec;
		  }
	  	  if(isButton1Pressed())
	  	  {
	  		  all_led_off();
	  		  status=SET_RED;
	  		  setTimer(10000);
	  		  setTimer1(500);
	  		  setTimer2(250);
	  	  }
  		  break;
  	  case RED_YEL:
  		updateled(count1,count2);
  		  		  if(timer_flag2==1)
  		  		  {
  		  			 update7SEG(index1++);
  		  			if(index1>1)index1=0;
  		  			 setTimer2(250);
  		  		  }
  		  		  if(timer_flag1==1)
  		  		  {
  		  			  count1--;
  		  			  count2--;
  		  			  setTimer1(1000);
  		  		  }
		  HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, SET);
		  HAL_GPIO_WritePin(YEL1_GPIO_Port, YEL1_Pin, RESET);
		  HAL_GPIO_WritePin(GRE1_GPIO_Port, GRE1_Pin, RESET);
		  HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, RESET);
		  HAL_GPIO_WritePin(YEL2_GPIO_Port, YEL2_Pin, SET);
		  HAL_GPIO_WritePin(GRE2_GPIO_Port, GRE2_Pin, RESET);
		  if(timer_flag==1)
		  {
			  count1=gre_sec;
			  count2=red_sec;
			  status=GRE_RED;
			  setTimer(gre_sec*1000);
		  	  setTimer1(1000);
		  	  setTimer2(250);
		  }
	  	  if(isButton1Pressed())
	  	  {
	  		  all_led_off();
	  		  status=SET_RED;
	  		  setTimer(10000);
	  		  setTimer1(500);
	  		  setTimer2(250);
	  	  }
  		  break;
  	  case GRE_RED:
    	updateled(count1,count2);
    		  		  if(timer_flag2==1)
    		  		  {
    		  			 update7SEG(index1++);
    		  			if(index1>1)index1=0;
    		  			 setTimer2(250);
    		  		  }
    		  		  if(timer_flag1==1)
    		  		  {
    		  			  count1--;
    		  			  count2--;
    		  			  setTimer1(1000);
    		  		  }
		  HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, RESET);
		  HAL_GPIO_WritePin(YEL1_GPIO_Port, YEL1_Pin, RESET);
		  HAL_GPIO_WritePin(GRE1_GPIO_Port, GRE1_Pin, SET);
		  HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, SET);
		  HAL_GPIO_WritePin(YEL2_GPIO_Port, YEL2_Pin, RESET);
		  HAL_GPIO_WritePin(GRE2_GPIO_Port, GRE2_Pin, RESET);
		  if(timer_flag==1)
		  {
			  count1=yel_sec;
			  status=YEL_RED;
			  setTimer(yel_sec*1000);
		  	  setTimer1(1000);
		  	  setTimer2(250);
		  }
	  	  if(isButton1Pressed())
	  	  {
	  		  all_led_off();
	  		  status=SET_RED;
	  		  setTimer(10000);
	  		  setTimer1(500);
	  		  setTimer2(250);
	  	  }
  		  break;
  	  case YEL_RED:
      	updateled(count1,count2);
      		  		  if(timer_flag2==1)
      		  		  {
      		  			 update7SEG(index1++);
      		  			if(index1>1)index1=0;
      		  			 setTimer2(250);
      		  		  }
      		  		  if(timer_flag1==1)
      		  		  {
      		  			  count1--;
      		  			  count2--;
      		  			  setTimer1(1000);
      		  		  }
		  HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, RESET);
		  HAL_GPIO_WritePin(YEL1_GPIO_Port, YEL1_Pin, SET);
		  HAL_GPIO_WritePin(GRE1_GPIO_Port, GRE1_Pin, RESET);
		  HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, SET);
		  HAL_GPIO_WritePin(YEL2_GPIO_Port, YEL2_Pin, RESET);
		  HAL_GPIO_WritePin(GRE2_GPIO_Port, GRE2_Pin, RESET);
		  if(timer_flag==1)
		  {
			  count1=red_sec;
			  count2=gre_sec;
			  status=RED_GRE;
			  setTimer(2000);
		  	  setTimer1(1000);
		  	  setTimer2(250);
		  }
	  	  if(isButton1Pressed())
	  	  {
	  		  all_led_off();
	  		  status=SET_RED;
	  		  setTimer(10000);
	  		  setTimer1(500);
	  		  setTimer2(250);
	  	  }
		  break;
  	  default :
  		  break;
  	  }
  }
