/*
 * App.h
 *
 * Created: 11/2/2022 4:15:27 PM
 *  Author: ahmed
 */ 

#ifndef APP_APP_INTERFACE_H_
#define APP_APP_INTERFACE_H_
#include "STD_TYPES.h"
/*LEDs States Enum*/
typedef enum{
	LED_IDLE ,LED_ACTIVE
}LED_STATE_t;

/*mode state Enum*/
typedef enum{
	NORMAL_MODE, PEDESTRIAN_MODE
}MODE_t;

/*all Initials I need */
void APP_voidInit(void);

/*All application logic*/
u8 APP_voidStart(void);

/*Pedestrian Mode logic*/
u8 APP_voidPedestrianMode(void);

/*end of logic*/
u8 APP_voidFinish(void);

/*INT0_ISR function Prototype*/
void INT0_ISR(void);

#endif /* APP_APP_INTERFACE_H_ */