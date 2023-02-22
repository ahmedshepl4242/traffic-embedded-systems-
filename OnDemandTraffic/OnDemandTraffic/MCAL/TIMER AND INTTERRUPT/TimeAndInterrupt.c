/*
 * TimeAndInterrupt.c
 *
 * Created: 2/15/2023 8:46:17 PM
 *  Author: 20100
 */ 
#include "TimeAndInterrupt.h"
void timerAndRegisterControl()
{

	
	TCNT0 |= (1<<PIN2)|(1<<PIN3);//initial value
	TCCR0=0x00;//normal mode
  
  	sei(); //enable global interrupts
	MCUCR |=(1<<ISC00)|(1<<ISC01);//enable rising edge
	//BUTTON_init(button_2_port,button_2_pin);
	GICR|=(1<<INT0);  //enable  INT0
	
	

}