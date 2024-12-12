/*
 * softwaretimer.h
 *
 *  Created on: Dec 4, 2024
 *      Author: phong
 */

#ifndef INC_SOFTWARETIMER_H_
#define INC_SOFTWARETIMER_H_

extern int timer_flag;
extern int timer_flag1;
extern int timer_flag2;
void setTimer(int duration);
void timer_run();
void setTimer1(int duration);
void timer_run1();
void setTimer2(int duration);
void timer_run2();

#endif /* INC_SOFTWARETIMER_H_ */
