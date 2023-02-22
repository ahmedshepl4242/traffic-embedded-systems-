/*
 * app.c
 *
 * Created: 2/10/2023 9:44:59 PM
 *  Author: 20100
 */ 
#include "app.h"
Functions_return APP_start()
{
	Functions_return error=NO_THING;
	flag=NO_THING;
	yellow_flag=NO_THING;
	
	error=LED_init(PORT_A,PIN1);
	error=LED_init(PORT_A,PIN2);
	error=LED_init(PORT_A,PIN0);
	
	error=LED_init(PORT_B,PIN1);
	error=LED_init(PORT_B,PIN2);
	error=LED_init(PORT_B,PIN0);
	
	error=DIO_init(PIN2,PORT_D,IN);  //initailize pin int0 for  button
	
	


	
	while(1)
	{
		
		 error=NORMAL_mode_control();
	}
	if(error!=Ok)
	{
		error=NOT_OK;
		
	}
	return error;
}

ISR(INT0_vect)
{
	if((PORTA&(1<<PIN0))==1)
	{
		flag=RED_ON;
	}
	else if(yellow_flag==YELLOW_BLINKING)
	{
		flag=YELLOW_ON;
		
	}
	
	else
	{
		flag=GREEN_ON;
	}
	
}


