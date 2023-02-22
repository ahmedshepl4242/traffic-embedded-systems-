/*
 * PedeModeRed.c
 *
 * Created: 2/8/2023 5:01:47 PM
 *  Author: 20100
 */ 
#include "firststate.h"

Functions_return  control_pedestrain_mode_1()
{
	Functions_return error =NO_thing;
	if(flag==RED_ON)
	{
		if((flag!=GREEN_ON)&&(flag!=YELLOW_ON))
		{
				error=Red_cars_green_pedeST(PORT_A,PIN0,PORT_B,PIN2);
		}
	
	
		error=Yellow_2leds_greenPedeST(PORT_A,PIN1,PORT_B,PIN1,PIN2);
		error=redPedeST_on_greenCar_on(PORT_A,PIN2,PORT_B,PIN0);
	}
	if((flag==YELLOW_ON)||(flag==GREEN_ON))
	{
		
		
		error=Yellow_2leds_greenPedeST(PORT_A,PIN1,PORT_B,PIN1,PIN2);
		error=redPedeST_on_greenCar_on(PORT_A,PIN2,PORT_B,PIN0);
	}
	
	flag=NO_THING;
	
	if(error!=Ok)
	{
		error=NOT_OK;
		
	}
	return error;
}
