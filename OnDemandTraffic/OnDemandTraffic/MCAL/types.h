/*
 * types.h
 *
 * Created: 2/2/2023 1:14:09 PM
 *  Author: 20100
 */ 


#ifndef TYPES_H_
#define TYPES_H_

typedef unsigned char uint8_t;

typedef unsigned int uint16_t;

#include <avr/interrupt.h>
typedef enum Functions_return{
	NOT_OK,Ok,NO_thing
	}Functions_return;
	
typedef enum Interrupt{
	RED_ON,GREEN_ON,YELLOW_ON,NO_THING,YELLOW_BLINKING
}Interrupt;

Interrupt flag;
Interrupt yellow_flag;



#endif /* TYPES_H_ */