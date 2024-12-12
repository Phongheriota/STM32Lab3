/*
 * setRED.c
 *
 *  Created on: Dec 4, 2024
 *      Author: phong
 */


/*void fsm_init(){
	if(timer_flag==1)
	{
	switch(traffic_state)
			{
			case 0:
				setTimer(1000*gre_time);
		  		trafficlight(traffic_state);
		  		traffic_state++;
		  		break;
			case 1:
		  		setTimer(yel_time*1000);
		  		trafficlight(traffic_state);
		  		traffic_state++;
		  		  	break;
			case 2:
		  		setTimer(gre_time*1000);
		  		trafficlight(traffic_state);
		  		traffic_state++;
		  		break;
			case 3:
		  		setTimer(yel_time*1000);
		  		trafficlight(traffic_state);
		  		traffic_state=0;
		  		break;
			default:
				break;
			 }
	}
  }
void set_red()
	{
		//led_red nhay 0.5s
		if(timer_flag==1)
		{
			setTimer(500);
			HAL_GPIO_TogglePin(RED1_GPIO_Port, RED1_Pin);
			HAL_GPIO_TogglePin(RED2_GPIO_Port, RED2_Pin);
		}
		updateled(red_time,1);
		if(timer_flag1==1)
		{
			setTimer1(250);
			update7SEG(index++);
			if(index>1) index=0;
		}
		if(isButton2Pressed())
		{
			red_time++;
			if(red_time>99) red_time=1;
		}
		if(isButton2LongPressed())
		{
			red_time +=5;
			if(red_time>99) red_time=1;
		}
		if(isbutton3Pressed())
		{
			gre_time=red_time -yel_time;
		}
		// 7SEG1 VA 2 HIEN THI TIME
		// 7SEG3 VA 4 HIEN CHE DO
		//kiem tra but2 press thi red_time tang
		// but3 press thi set red_time,yel_time va gre_time
	}
void set_yel(){
	if(timer_flag==1)
			{
				setTimer(500);
				HAL_GPIO_TogglePin(YEL1_GPIO_Port, YEL1_Pin);
				HAL_GPIO_TogglePin(YEL2_GPIO_Port, YEL2_Pin);
			}
			updateled(yel_time,1);
			if(timer_flag1==1)
			{
				setTimer1(250);
				update7SEG(index++);
				if(index>1) index=0;
			}
			if(isButton2Pressed())
			{
				yel_time++;
				if(yel_time>99&&(yel_time+gre_time)>99) yel_time=1;
			}
			if(isButton2LongPressed())
			{
				yel_time +=5;
				if(yel_time>99&&(yel_time+gre_time)>99) yel_time=1;
			}
			if(isbutton3Pressed())
			{
				gre_time=red_time -yel_time;
			}
			// 7SEG1 VA 2 HIEN THI TIME
			// 7SEG3 VA 4 HIEN CHE DO
			//kiem tra but2 press thi red_time tang
			// but3 press thi set red_time,yel_time va gre_time
		}

void set_gre(){
	if(timer_flag==1)
			{
				setTimer(500);
				HAL_GPIO_TogglePin(GRE1_GPIO_Port, GRE1_Pin);
				HAL_GPIO_TogglePin(GRE2_GPIO_Port, GRE2_Pin);
			}
			updateled(gre_time,1);
			if(timer_flag1==1)
			{
				setTimer1(250);
				update7SEG(index++);
				if(index>1) index=0;
			}
			if(isButton2Pressed())
			{
				gre_time++;
				if(gre_time>99&&(yel_time+gre_time)>99) gre_time=1;
			}
			if(isButton2LongPressed())
			{
				gre_time +=5;
				if(gre_time>99&&(yel_time+gre_time)>99) gre_time=1;
			}
			if(isbutton3Pressed())
			{
				red_time= gre_time  + yel_time;
			}
			// 7SEG1 VA 2 HIEN THI TIME
			// 7SEG3 VA 4 HIEN CHE DO
			//kiem tra but2 press thi red_time tang
			// but3 press thi set red_time,yel_time va gre_time
		}*/
