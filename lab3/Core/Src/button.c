#include "button.h"
#include "main.h"
int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;
int KeyReg3 = NORMAL_STATE;

int TimeOutForKeyPress =500;
int button1_pressed = 0;
int button1_long_pressed = 0;
int button1_flag = 0;

int isButton1Pressed(){
	if(button1_flag == 1){
		button1_flag = 0;
		return 1;
	}
	return 0;
}

int isButton1LongPressed(){
	if(button1_long_pressed == 1){
		button1_long_pressed = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess(){
	//TODO
	button1_flag = 1;
}

void getKeyInput(){
  KeyReg0 = KeyReg1;
  KeyReg1 = KeyReg2;
  // Add your key
  KeyReg2 = HAL_GPIO_ReadPin(BUT1_GPIO_Port, BUT1_Pin);

  if ((KeyReg0 == KeyReg1) && (KeyReg1 == KeyReg2)){
    if (KeyReg2!= KeyReg3){
      KeyReg3 = KeyReg2;
      if (KeyReg3 == PRESSED_STATE){
        TimeOutForKeyPress = 150;
        subKeyProcess();
        button1_flag = 1;
      }

    }else{
        TimeOutForKeyPress --;
        if (TimeOutForKeyPress == 0){
        	TimeOutForKeyPress = 500;
        	if (KeyReg3 == PRESSED_STATE){
        		//subKeyProcess();
        		button1_flag = 1;
        	}
        }
    }
  }
}
int KeyReg0_2 = NORMAL_STATE;
int KeyReg1_2 = NORMAL_STATE;
int KeyReg2_2 = NORMAL_STATE;
int KeyReg3_2 = NORMAL_STATE;

int TimeOutForKeyPress2 =  500;
int button2_pressed = 0;
int button2_long_pressed = 0;
int button2_flag = 0;

int isButton2Pressed(){
	if(button2_flag == 1){
		button2_flag = 0;
		return 2;
	}
	return 0;
}

int isButton2LongPressed(){
	if(button2_long_pressed == 1){
		button2_long_pressed = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess2(){
	//TODO
	//HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
	button2_flag = 1;
}

void getKeyInput2(){
  KeyReg0_2 = KeyReg1_2;
  KeyReg1_2 = KeyReg2_2;
  // Add your key
  KeyReg2_2 = HAL_GPIO_ReadPin(BUT2_GPIO_Port, BUT2_Pin);

  if ((KeyReg1_2 == KeyReg0_2) && (KeyReg1_2 == KeyReg2_2)){
    if (KeyReg2_2 != KeyReg3_2){
      KeyReg3_2 = KeyReg2_2;

      if (KeyReg3_2 == PRESSED_STATE){
          TimeOutForKeyPress2 = 150;
          subKeyProcess2();
          button2_flag = 1;
      }

    }else{
        TimeOutForKeyPress2 --;
        if (TimeOutForKeyPress2 == 0){
        	TimeOutForKeyPress2 = 500;
        	if (KeyReg3_2 == PRESSED_STATE){
        		//subKeyProcess();
        		button2_flag = 1;
        	}
        }
    }
  }
}
int KeyReg0_3 = NORMAL_STATE;
int KeyReg1_3 = NORMAL_STATE;
int KeyReg2_3 = NORMAL_STATE;
int KeyReg3_3 = NORMAL_STATE;

int TimeOutForKeyPress3 =  500;
int button3_pressed = 0;
int button3_long_pressed = 0;
int button3_flag = 0;

int isbutton3Pressed(){
	if(button3_flag == 1){
		button3_flag = 0;
		return 1;
	}
	return 0;
}

int isbutton3LongPressed(){
	if(button3_long_pressed == 1){
		button3_long_pressed = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess3(){
	//TODO
	//HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
	button3_flag = 1;
}

void getKeyInput3(){
  KeyReg0_3 = KeyReg1_3;
  KeyReg1_3 = KeyReg2_3;
  // Add your key
  KeyReg2_3 = HAL_GPIO_ReadPin(BUT3_GPIO_Port, BUT3_Pin);

  if ((KeyReg1_3 == KeyReg0_3) && (KeyReg1_3 == KeyReg2_3)){
    if (KeyReg2_3 != KeyReg3_3){
      KeyReg3_3 = KeyReg2_3;

      if (KeyReg3_3 == PRESSED_STATE){
          TimeOutForKeyPress3 = 150;
          subKeyProcess3();
          button3_flag = 1;
      }

    }else{
        TimeOutForKeyPress3 --;
        if (TimeOutForKeyPress3 == 0){
        	TimeOutForKeyPress3 = 500;
        	if (KeyReg3_3 == PRESSED_STATE){
        		//subKeyProcess();
        		button3_flag = 1;
        	}
        }
    }
  }
}

