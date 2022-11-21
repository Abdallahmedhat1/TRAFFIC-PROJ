/*
 * PORT_PROGRAM.c
 *
 * Created: 11/2/2022 4:58:21 PM
 *  Author: ahmed
 */ 
#include "STD_TYPES.h"

#include "PORT_CONFIG.h"
#include "PORT_PRIVATE.h"
#include "PORT_INTERFACE.h"
#include "PORT_REGISTER.h"



/*set all PORTS Direction*/
void PORT_voidInit(void){


	DDRA =PORTA_DIR;
	DDRB =PORTB_DIR;
	DDRC =PORTC_DIR;
	DDRD =PORTD_DIR;

	PORTA =PORTA_INITIAL_VALUE;
	PORTB =PORTB_INITIAL_VALUE;
	PORTC =PORTC_INITIAL_VALUE;
	PORTD =PORTD_INITIAL_VALUE;

}