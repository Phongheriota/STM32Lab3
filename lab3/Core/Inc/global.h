/*
 * global.h
 *
 *  Created on: Dec 4, 2024
 *      Author: phong
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "softwaretimer.h"
#include "button.h"
#include "main.h"
#include "all_led_off.h"
#include "display7SEG.h"
#include "led_update.h"
#define INIT 		1
#define RED_GRE		2
#define RED_YEL		3
#define GRE_RED		4
#define YEL_RED		5

#define SET_RED 	11
#define SET_YEL		12
#define SET_GRE		13
extern int status;

#endif /* INC_GLOBAL_H_ */
