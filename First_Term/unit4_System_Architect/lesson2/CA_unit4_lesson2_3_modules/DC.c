/*
 * DC.c
 *
 *  Created on: 21 Mar 2024
 *      Author: mnj
 */

#include "DC.h"

// variables

int DC_speed = 0;


// STATE pointer to function
void (*DC_state)();

void DC_init()
{
	// init PWM
	printf("DC init \n");
}

void DC_motor(int s)
{
	DC_speed = s;
	DC_state = STATE(DC_busy);
	printf("DC_busy State:    speed=%d \n", DC_speed);
}

STATE_define(DC_idle)
{
	// state name
	DC_state_id = DC_idle;


	printf("DC_idle State: speed = %d \n", DC_speed);

}


STATE_define(DC_busy)
{
	// state name
	DC_state_id = DC_busy;


	DC_state = STATE(DC_idle);
	printf("DC_busy State: speed = %d \n", DC_speed);

}



