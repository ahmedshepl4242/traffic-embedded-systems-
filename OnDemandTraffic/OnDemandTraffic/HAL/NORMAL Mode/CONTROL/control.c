/*
 * control.c
 *
 * Created: 2/8/2023 2:41:41 PM
 *  Author: 20100
 */  
#include  "control.h"
//#include "../../MCAL/TIMER/timer.h"

 Functions_return NORMAL_mode_control()
{
	
  

	Functions_return error=NO_thing;
	
	error=timerAndRegisterControl();
	error= Green_led(PORT_A,PIN2 );
	 if(flag!=GREEN_ON)
	 {
		    error= Yellow_led(PORT_A,PIN1 ); 
		   if(flag!=YELLOW_ON)
		   {
			   error= Red_led(PORT_A,PIN0);
		   }
		   if(flag!=RED_ON)
		   {
		    error= Yellow_led(PORT_A,PIN1 );
		   
		   }
		  
	 }
	
	 if( flag==RED_ON)
	 {
		error= control_pedestrain_mode_1();
		
		
	 }
      if((flag==GREEN_ON)||(flag==YELLOW_ON))
	 {
		 error=control_pedestrain_mode_2();
		  
		 
	 }
	
	flag=NO_THING;
	
	if(error!=Ok)
	{
		error=NOT_OK;
		
	}
	
	return error;
	 
}
