/*
 * switchleds.h
 *
 * Created: 2/7/2023 2:35:15 PM
 *  Author: 20100
 */ 


#ifndef SWITCHLEDS_H_
#define SWITCHLEDS_H_

#include "../../LED Driver/led.h"
#define  NUMBER_OF_OVERFLOWS 20

	
Functions_return Red_led(uint8_t port,uint8_t pin );
Functions_return Yellow_led(uint8_t port,uint8_t pin );
Functions_return Green_led(uint8_t port,uint8_t pin );

#endif /* SWITCHLEDS_H_ */