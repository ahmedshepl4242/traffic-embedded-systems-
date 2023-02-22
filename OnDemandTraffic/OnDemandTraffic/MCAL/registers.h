/*
 * registers.h
 *
 * Created: 2/2/2023 12:21:01 PM
 *  Author: 20100
 */ 


#ifndef REGISTERS_H_
#define REGISTERS_H_

#include "types.h"  
 
 #define DDRA *((volatile uint8_t*)0x3A)
 #define PORTA  *((volatile uint8_t*)0x3B)
 #define PINA   *((volatile uint8_t*)0x39)
 
#define DDRB  *((volatile uint8_t*)0x37)
#define PORTB *((volatile uint8_t*)0x38)
#define PINB *((volatile uint8_t*)0x36)

#define DDRC   *((volatile uint8_t*)0x34)
#define PORTC  *((volatile uint8_t*)0x35)
#define PINC  *((volatile uint8_t*)0x33)



#define DDRD   *((volatile uint8_t*)0x31)
#define PORTD  *((volatile uint8_t*)0x32)
#define PIND   *((volatile uint8_t*)0x30)

//timer registers 


#define TCCR0   *((volatile uint8_t*)0x53)
#define TIFR  *((volatile uint8_t*)0x58)
#define TCNT0   *((volatile uint8_t*)0x52)


#endif /* REGISTERS_H_ */