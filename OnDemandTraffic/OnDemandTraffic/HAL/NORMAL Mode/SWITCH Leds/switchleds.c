/*
 * switchleds.c
 *
 * Created: 2/7/2023 2:34:57 PM
 *  Author: 20100
 *
*/
#include "switchleds.h"

  uint16_t numberOfoverflow=0;
 
Functions_return Red_led(uint8_t port,uint8_t pin )
{
	Functions_return error=NO_thing;
	numberOfoverflow=0;
	error=DIO_write(pin,port,HIGH);
	

	TCCR0 |= (1<<PIN0)|(1<<PIN2);	//1024 prescaler//START time
	
	
	while(numberOfoverflow<NUMBER_OF_OVERFLOWS)
	{
		
		while((TIFR&(1<<0))==0);

		
		//LED_toggle(port,pin);
		if(flag==RED_ON)
		{
			break;
		}
		
		TIFR |=(1<<0);
		numberOfoverflow++;
		
	}
	
	
	
	numberOfoverflow=0;
	
	TCCR0=0x00;
	error=(pin,port,LOW);
	if(error!=Ok)
	{
		error=NOT_OK;
		
	}
    return error;
		
}


Functions_return Green_led(uint8_t port,uint8_t pin )
{
	Functions_return error=NO_thing;
	numberOfoverflow=0;
	error=DIO_write(pin,port,HIGH);
	 
	

	TCCR0 |= (1<<PIN0)|(1<<PIN2);	//1024 prescaler//START time
	
	
	while(numberOfoverflow<NUMBER_OF_OVERFLOWS)
	{
		
		while((TIFR&(1<<0))==0);

		
		//LED_toggle(port,pin);
		if(flag==GREEN_ON)
		{
	    error=  DIO_write(PIN0,PORT_B,HIGH);
	
		}
		
		TIFR |=(1<<0);
		numberOfoverflow++;
		
	}
	
	//counter++;
	if(numberOfoverflow!=20)
	{
	//	return_value=return_error;
	}
	else if(numberOfoverflow==20)
	{
		//return_value=return_Ok;
	}
	
	numberOfoverflow=0;
	//  returnValue=0;
 
	TCCR0=0x00;
	error=DIO_write(pin,port,LOW);
     if(error!=Ok)
     {
	     error=NOT_OK;
	     
     }
		   
	  return error;
}


Functions_return Yellow_led(uint8_t port,uint8_t pin)
{
		Functions_return error=NO_thing;
	   yellow_flag=YELLOW_BLINKING;
	   numberOfoverflow=0;
	  
		error=DIO_write(pin,port,LOW);
		error=LED_toggle(port,pin);
		

		TCCR0 |= (1<<PIN0)|(1<<PIN2);	//1024 prescaler//START time
		
		
		while(numberOfoverflow<NUMBER_OF_OVERFLOWS)
		{
			
			while((TIFR&(1<<0))==0);
	       if(flag==YELLOW_ON)
	       {
		      error= DIO_write(PIN0,PORT_B,HIGH);
		
	       }
			error=LED_toggle(port,pin);
			
			
			TIFR |=(1<<0);
			numberOfoverflow++;
			
		}
		
		
		numberOfoverflow=0;
		error=DIO_write(pin,port,LOW);
	 
		       
		TCCR0=0x00;
		yellow_flag=NO_THING;
		
		if(error!=Ok)
		{
			error=NOT_OK;
			
		}
	 	return error;
}
