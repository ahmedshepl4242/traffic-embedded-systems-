/*
 * dio.h
 *
 * Created: 2/2/2023 1:25:29 PM
 *  Author: 20100
 */ 


#ifndef DIO_H_
#define DIO_H_

 
#include "../TIMER AND INTTERRUPT/TimeAndInterrupt.h"
//typedef unsigned char uint8_t;
#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'

#define IN 0
#define OUT 1

#define LOW 0
#define HIGH 1

Functions_return DIO_init(uint8_t pinNumber,uint8_t portNumber,uint8_t Direction);
Functions_return DIO_write(uint8_t pinNumber,uint8_t portNumber,uint8_t value);
Functions_return DIO_toggle(uint8_t pinNumber,uint8_t portNumber);
Functions_return DIO_read(uint8_t pinNumber,uint8_t portNumber,uint8_t *value);




#endif /* DIO_H_ */