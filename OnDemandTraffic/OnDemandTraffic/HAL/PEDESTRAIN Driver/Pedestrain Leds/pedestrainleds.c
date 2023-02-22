/*
 * pedestrainleds.c
 *
 * Created: 2/8/2023 5:28:29 PM
 *  Author: 20100
 */ 
	#include "pedestrainleds.h"
  uint16_t numberOfoverflows=0;
  
	Functions_return Red_cars_green_pedeST(uint8_t portN,uint8_t pinN,uint8_t portP,uint8_t pinP) // ....green pdedstrain  is on.....red car is on
	{
		Functions_return error=NO_thing;
		numberOfoverflows=0;
		error=DIO_write(pinN,portN,HIGH);
		error=DIO_write(pinP,portP,HIGH);
		
		
		

		TCCR0 |= (1<<PIN0)|(1<<PIN2);	//1024 prescaler//START time
		
		
		while(numberOfoverflows<NUMBER_OF_OVERFLOWS)
		{
			
			while((TIFR&(1<<0))==0);

			
			
			
			TIFR |=(1<<0);
			numberOfoverflows++;
			
		}
		
	 
		numberOfoverflows=0;
		 
		
		TCCR0=0x00;
		error=DIO_write(pinN,portN,LOW);  //red led is off
		
		  if(error!=Ok)
		  {
			  error=NOT_OK;
			  
		  }
		
	   return error;
		
	}
	
	
	Functions_return Yellow_2leds_greenPedeST(uint8_t portN,uint8_t pinN,uint8_t portP,uint8_t pinP_Y,uint8_t pinP_G)//2 yellow  leds is blinking and green pedestrain leds is on 
	{
		Functions_return error=NO_thing;
		numberOfoverflows=0;
		error=DIO_write(pinN,portN,HIGH);   //yellow cars led
		error=DIO_write(pinP_Y,portP,HIGH);  //yellow pedestrain  led
		error=DIO_write(pinP_G,portP,HIGH); //green pedestrain  led
		
		error=LED_toggle(portN,pinN);
		error=LED_toggle(portP,pinP_Y);
		

		TCCR0 |= (1<<PIN0)|(1<<PIN2);	//1024 prescaler//START time
		
		
		while(numberOfoverflows<NUMBER_OF_OVERFLOWS)
		{
			
			while((TIFR&(1<<0))==0);
			
			error=LED_toggle(portN,pinN);
			error=LED_toggle(portP,pinP_Y);
			
			
			TIFR |=(1<<0);
			numberOfoverflows++;
			
		}
		
		//returnValue=1;
		//counter++;Functions_return return_value=NO_thing;
		numberOfoverflows=0;
		error=DIO_write(pinN,portN,LOW);   //yellow cars led
		error=DIO_write(pinP_Y,portP,LOW);  //yellow pedestrain  led
		error=DIO_write(pinP_G,portP,LOW); //green pedestrain  led
		TCCR0=0x00;
		
		if(error!=Ok)
		{
			error=NOT_OK;
			
		}
		return error;
	}

	Functions_return redPedeST_on_greenCar_on(uint8_t portN,uint8_t pinN,uint8_t portP,uint8_t pinP)//green pedestrain off...red pedestrain on...green car on
    {
		Functions_return error=NO_thing;
		
		numberOfoverflows=0;
		error=DIO_write(pinN,portN,HIGH);
		error=DIO_write(pinP,portP,HIGH);
		
		//LED_toggle(port,pin);
		

		TCCR0 |= (1<<PIN0)|(1<<PIN2);	//1024 prescaler//START time
		
		
		while(numberOfoverflows<NUMBER_OF_OVERFLOWS)
		{
			
			while((TIFR&(1<<0))==0);

			TIFR |=(1<<0);
			numberOfoverflows++;
			
		}
		
		
		numberOfoverflows=0;
	
		TCCR0=0x00;
		error=DIO_write(pinN,portN,LOW);  //red led is off
		error=DIO_write(pinP,portP,LOW); //green led is off
		
		if(error!=Ok)
		{
			error=NOT_OK;
			
		}
		return error;
	}