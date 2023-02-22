/*
 * led.c
 *
 * Created: 2/2/2023 3:42:24 PM
 *  Author: 20100
 */ 
#include "led.h"
Functions_return LED_init(uint8_t ledPort,uint8_t ledPin)
{
	Functions_return error=NO_thing;
	
	error=DIO_init(ledPin,ledPort,OUT);
	if(error!=Ok)
	{
		error=NOT_OK;
		
	}
	return error;
}
Functions_return LED_on(uint8_t ledPort,uint8_t ledPin)
{
	Functions_return error=NO_thing;
	error=DIO_write(ledPin,ledPort,HIGH);
	return error;
	
}
Functions_return LED_off(uint8_t ledPort,uint8_t ledPin)
{
	Functions_return error=NO_thing;
	error=DIO_write(ledPin,ledPort,LOW);
	if(error!=Ok)
	{
		error=NOT_OK;
		
	}
	return error;
}
Functions_return LED_toggle(uint8_t ledPort,uint8_t ledPin)
{
	Functions_return error=NO_thing;
	error=DIO_toggle(ledPin,ledPort);
	if(error!=Ok)
	{
		error=NOT_OK;
		
	}
	return error;
	
}
