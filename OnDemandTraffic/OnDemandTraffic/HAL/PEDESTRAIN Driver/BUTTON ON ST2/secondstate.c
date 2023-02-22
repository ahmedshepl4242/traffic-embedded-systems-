/*
 * pedemodeleds.c
 *
 * Created: 2/8/2023 5:10:16 PM
 *  Author: 20100
 **/
#include "secondstate.h"
uint16_t numberofoverflows=0;
Functions_return control_pedestrain_mode_2()
{
	  Functions_return error=NO_thing;
	   error=DIO_write(PIN0,PORT_B,LOW); //red led is off
	   
	 error= YELLOW_2leds(PORT_A,PIN1,PORT_B,PIN1);
	  error=carsred_on_greenpdeST_on(PORT_A,PIN0,PORT_B,PIN2);
	  error= control_pedestrain_mode_1();
	   if(error!=Ok)
	   {
		   error=NOT_OK;
		   
	   }
	   return error;
}
Functions_return YELLOW_2leds(uint8_t portN,uint8_t pinN,uint8_t portP,uint8_t pinP)
{
	Functions_return error=NO_thing;
	numberofoverflows=0;
	error=DIO_write(pinN,portN,HIGH);   //yellow cars led
	error=DIO_write(pinP,portP,HIGH);  //yellow pedestrain  led
	//DIO_write(pinP_G,portP,HIGH); //green pedestrain  led
	
	
	
	
	
	error=DIO_write(pinN,portN,HIGH);   //yellow cars led
	error=DIO_write(pinP,portP,HIGH);  //yellow pedestrain  led
	//DIO_write(pinP_G,portP,HIGH); //green pedestrain  led
	
	error=LED_toggle(portN,pinN);
	error=LED_toggle(portP,pinP);
	

	TCCR0 |= (1<<PIN0)|(1<<PIN2);	//1024 prescaler//START time
	
	
	while(numberofoverflows<NUMBER_OF_OVERFLOWS)
	{
		
		while((TIFR&(1<<0))==0);
		
		error=LED_toggle(portN,pinN);
		error=LED_toggle(portP,pinP);
		
		
		TIFR |=(1<<0);
		numberofoverflows++;
		
	}
	
	//returnValue=1;
	//counter++;
	numberofoverflows=0;
	error=DIO_write(pinN,portN,LOW);   //yellow cars led
	error=DIO_write(pinP,portP,LOW);  //yellow pedestrain  led
    	       
	TCCR0=0x00;
	if(error!=Ok)
	{
		error=NOT_OK;
		
	}
	return error;
}
 Functions_return carsred_on_greenpdeST_on(uint8_t portN,uint8_t pinN,uint8_t portP,uint8_t pinP)
 {
	 Functions_return error=NO_thing;
	 numberofoverflows=0;
	error= DIO_write(pinN,portN,HIGH);
	error= DIO_write(pinP,portP,HIGH);
	 
	 
	 

	 TCCR0 |= (1<<PIN0)|(1<<PIN2);	//1024 prescaler//START time
	 
	 
	 while(numberofoverflows<NUMBER_OF_OVERFLOWS)
	 {
		 
		 while((TIFR&(1<<0))==0);

	
		 
		 
		 TIFR |=(1<<0);
		 numberofoverflows++;
		 
	 }
	 
	
	 numberofoverflows=0;

	 TCCR0=0x00;
	error= DIO_write(pinN,portN,LOW);  //red led is off
	 error=DIO_write(pinP,portP,LOW); //green led is off
	 
	 if(error!=Ok)
	 {
		 error=NOT_OK;
		 
	 }
	return error;
	 
 }