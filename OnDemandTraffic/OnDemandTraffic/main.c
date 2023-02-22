/*
 * my first project.c
 *
 * Created: 1/30/2023 3:05:25 AM
 * Author : 20100
 */ 
//#define F_CPI 1000000U 
//#include <avr/io.h>
//#include <util/delay.h>




//#include "PEDESTRAIN Driver/BUTTON ON ST2/secondstate.h"

#include "APP/app.h"


//#include "BUTTON Driver/button.h"

//#define  NUMBER_OF_OVERFLOWS 20

 


int main(void)
{
  Functions_return error=NO_thing;	
  error=APP_start();
  if(error!=Ok)
  {
	  error=NOT_OK;
	  
  }
  
}
