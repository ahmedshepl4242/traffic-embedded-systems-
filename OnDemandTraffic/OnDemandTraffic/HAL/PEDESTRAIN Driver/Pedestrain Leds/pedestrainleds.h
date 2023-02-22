/*
 * pedestrainleds.h
 *
 * Created: 2/8/2023 5:28:59 PM
 *  Author: 20100
 */ 


#ifndef PEDESTRAINLEDS_H_
#define PEDESTRAINLEDS_H_


#include "../../NORMAL Mode/CONTROL/control.h"

	
Functions_return Red_cars_green_pedeST(uint8_t portN,uint8_t pinN,uint8_t portP,uint8_t pinP);
Functions_return Yellow_2leds_greenPedeST(uint8_t portN,uint8_t pinN,uint8_t portP,uint8_t pinP_Y,uint8_t pinP_G);
Functions_return redPedeST_on_greenCar_on(uint8_t portN,uint8_t pinN,uint8_t portP,uint8_t pinP);

#endif /* PEDESTRAINLEDS_H_ */