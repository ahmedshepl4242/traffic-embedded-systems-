/*
 * dio.c
 *
 * Created: 2/2/2023 1:25:46 PM
 *  Author: 20100
 */
 
 

#include "dio.h"

Functions_return DIO_init(uint8_t pinNumber,uint8_t portNumber,uint8_t Direction)
{
	Functions_return error=NO_thing;
switch(portNumber){
	
	case PORT_A :
	   if(Direction==IN)
		 {
			 DDRA &=~(1<<pinNumber);		 
		 }
      else if(Direction==OUT)
	    {	
			 DDRA |=(1<<pinNumber);
			 
	    }
		else{
			//error handling
		}
	error=Ok;	
	  break;
	
	
	
	case PORT_B :
	if(Direction==IN)
		{
			DDRB &=~(1<<pinNumber);
		}
		else if(Direction==OUT)
		{
			DDRB |=(1<<pinNumber);
			
		}
		else{
			//error handling
		}
	error=Ok;
	break;			 
	
	
	
	case PORT_C :
	if(Direction==IN)
		{
			DDRC &=~(1<<pinNumber);
		}
		else if(Direction==OUT)
		{
			DDRC |=(1<<pinNumber);
			
		}
		else{
			//error handling
		}
	error=Ok;
	break;
	
	
	
	case PORT_D :
	if(Direction==IN)
		{
			DDRD &=~(1<<pinNumber);
		}
		else if(Direction==OUT)
		{
			DDRD |=(1<<pinNumber);
			
		}
		else{
			//error handling
		}
		error=Ok;
    break;
	
 }
 if(error!=Ok)
 {
	 error=NOT_OK;
	 
 }
 return error;
}
Functions_return DIO_write(uint8_t pinNumber,uint8_t portNumber,uint8_t value)

{
	Functions_return error=NO_thing;
  switch(portNumber)
  {
	case PORT_A :
	if(value==LOW)
	{
		PORTA &=~(1<<pinNumber);
	}
	else if(value==HIGH)
	{
		PORTA |=(1<<pinNumber);
		
	}
	else{
		//error handling
	}
	error=Ok;
	break;
	
	case PORT_B :
	if(value==LOW)
		{
			PORTB &=~(1<<pinNumber);
		}
		else if(value==HIGH)
		{
			PORTB |=(1<<pinNumber);
			
		}
		else{
			//error handling
		}
		error=Ok;
		break;
		case PORT_C :
		if(value==LOW)
		{
			PORTC &=~(1<<pinNumber);
		}
		else if(value==HIGH)
		{
			PORTC |=(1<<pinNumber);
			
		}
		else{
			//error handling
		}
		error=Ok;
		break;
		case PORT_D :
		if(value==LOW)
		{
			PORTD &=~(1<<pinNumber);
		}
		else if(value==HIGH)
		{
			PORTD |=(1<<pinNumber);
			
		}
		else{
			//error handling
		}
		error=Ok;
		break;	
	}
	if(error!=Ok)
	{
		error=NOT_OK;
		
	}
	return error;
	
}
Functions_return DIO_toggle(uint8_t pinNumber,uint8_t portNumber)
{
	Functions_return error=NO_thing;
	switch(portNumber)
	{
		case PORT_A :
		PORTA ^=(1<<pinNumber);
		error=Ok;
		break;
		
		case PORT_B :
		  PORTB ^=(1<<pinNumber);
			error=Ok;			
		break;
		case PORT_C :
		PORTC ^=(1<<pinNumber);
		error=Ok;
		break;
		case PORT_D:
		PORTD ^=(1<<pinNumber);
		error=Ok;
		break;
	}
	if(error!=Ok)
	{
		error=NOT_OK;
		
	}
	return error;
}
Functions_return DIO_read(uint8_t pinNumber,uint8_t portNumber,uint8_t *value)
{
	Functions_return error=NO_thing;
	switch(portNumber)
	{
		case PORT_A :
		*value= (PINA &(1<<pinNumber))>>pinNumber;
		error=Ok;
		break;
		
		case PORT_B :
		*value= (PINB & (1<<pinNumber))>>pinNumber;
		error=Ok;
		break;
		case PORT_C :
		*value= (PINC & (1<<pinNumber))>>pinNumber;
		error=Ok;
		break;
		case PORT_D:
		*value= (PIND &(1<<pinNumber))>>pinNumber;
		error=Ok;
		break;
		default:
		break;
	}
	if(error!=Ok)
	{
		error=NOT_OK;
		
	}
	return error;
}
