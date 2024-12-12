/*
 * all_led_off.c
 *
 *  Created on: Dec 4, 2024
 *      Author: phong
 */

#include "all_led_off.h"

void all_led_off()
{
	  HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, RESET);
	  HAL_GPIO_WritePin(YEL1_GPIO_Port, YEL1_Pin, RESET);
	  HAL_GPIO_WritePin(GRE1_GPIO_Port, GRE1_Pin, RESET);
	  HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, RESET);
	  HAL_GPIO_WritePin(YEL2_GPIO_Port, YEL2_Pin, RESET);
	  HAL_GPIO_WritePin(GRE2_GPIO_Port, GRE2_Pin, RESET);
	}
