/*
 * softwaretimer.c
 *
 *  Created on: Dec 4, 2024
 *      Author: phong
 */

#include "softwaretimer.h"

int timer_count=0;
int timer_flag=0;
int TIME_CYCLE=10;
int timer_count1=0;
int timer_flag1=0;
int timer_count2=0;
int timer_flag2=0;
void setTimer(int duration)
{
	timer_count=duration/TIME_CYCLE;
	timer_flag=0;
}

void timer_run()
{
	if(timer_count>0)
		{
		timer_count--;
		if(timer_count==0)timer_flag=1;
		}
}
void setTimer1(int duration)
{
	timer_count1=duration/TIME_CYCLE;
	timer_flag1=0;
}
void timer_run1()
{
	if(timer_count1>0)
		{
		timer_count1--;
		if(timer_count1==0)timer_flag1=1;
		}
}
void setTimer2(int duration)
{
	timer_count2=duration/TIME_CYCLE;
	timer_flag2=0;
}
void timer_run2()
{
	if(timer_count2>0)
		{
		timer_count2--;
		if(timer_count2==0)timer_flag2=1;
		}
}

