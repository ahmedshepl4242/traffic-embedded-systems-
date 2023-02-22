/*
 * led.h
 *
 * Created: 2/15/2023 1:45:49 PM
 *  Author: 20100
 */ 


#ifndef LED_H_
#define LED_H_
#include "../../MCAL/DIO Driver/dio.h"

#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7




Functions_return LED_init(uint8_t ledPort,uint8_t ledPin);
Functions_return LED_on(uint8_t ledPort,uint8_t ledPin);
Functions_return LED_off(uint8_t ledPort,uint8_t ledPin);
Functions_return LED_toggle(uint8_t ledPort,uint8_t ledPin);

#endif /* LED_H_ */