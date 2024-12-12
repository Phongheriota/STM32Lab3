/*
 * 7SegAnode.c
 *
 *  Created on: Sep 20, 2024
 *      Author: phong
 */
#include "main.h"
#include "global.h"
void display7SEG1(int x){
	switch (x) {
	        case 0:
	        	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_SET);
	            break;
	        case 1:
	        	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_SET);
	        	break;
	        case 2:
	        	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_RESET);
	        	break;
	        case 3:
	        	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_RESET);
	        	break;
	        case 4:
	        	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_RESET);
	        	break;
	        case 5:
	        	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_RESET);
	        	break;
	        case 6:
	        	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_RESET);
	        	break;
	        case 7:
	        	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_SET);
	        	break;
	        case 8:
	        	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_RESET);
	        	break;
	        case 9:
	        	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, GPIO_PIN_RESET);
	        	break;
}
}
void display7SEG2(int x){
	switch (x) {
	        case 0:
	        	HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG14_GPIO_Port, SEG14_Pin, GPIO_PIN_SET);
	            break;
	        case 1:
	        	HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG14_GPIO_Port, SEG14_Pin, GPIO_PIN_SET);
	        	break;
	        case 2:
	        	HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG14_GPIO_Port, SEG14_Pin, GPIO_PIN_RESET);
	        	break;
	        case 3:
	        	HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG14_GPIO_Port, SEG14_Pin, GPIO_PIN_RESET);
	        	break;
	        case 4:
	        	HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG14_GPIO_Port, SEG14_Pin, GPIO_PIN_RESET);
	        	break;
	        case 5:
	        	HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG14_GPIO_Port, SEG14_Pin, GPIO_PIN_RESET);
	        	break;
	        case 6:
	        	HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG14_GPIO_Port, SEG14_Pin, GPIO_PIN_RESET);
	        	break;
	        case 7:
	        	HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG14_GPIO_Port, SEG14_Pin, GPIO_PIN_SET);
	        	break;
	        case 8:
	        	HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG14_GPIO_Port, SEG14_Pin, GPIO_PIN_RESET);
	        	break;
	        case 9:
	        	HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, GPIO_PIN_SET);
	        	HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, GPIO_PIN_RESET);
	        	HAL_GPIO_WritePin(SEG14_GPIO_Port, SEG14_Pin, GPIO_PIN_RESET);
	        	break;
}
}
