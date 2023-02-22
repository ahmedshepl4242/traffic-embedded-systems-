/*
 *  
 *
 * Created: 2/8/2023 5:10:28 PM
 *  Author: 20100
 */ 


#ifndef  SECONDSTATE_H_
#define SECONDSTATE_H_

#include "../Pedestrain Leds/pedestrainleds.h"


Functions_return control_pedestrain_mode_2();

//  2 yellow leds are blinking after that you should turn off leds 
Functions_return YELLOW_2leds(uint8_t portN,uint8_t pinN,uint8_t portP,uint8_t pinP);  // p>>>>pedestrain mode  // N>>>normal mode

//cars led is on // green pedestrain is on
Functions_return carsred_on_greenpdeST_on(uint8_t portN,uint8_t pinN,uint8_t portP,uint8_t pinP);  // p>>>>pedestrain mode  // N>>>normal mode



#endif /* SECONDSTATE_H_ */