/*
 * CA.c
 *
 *  Created on: 21 Mar 2024
 *      Author: mnj
 */

#include "CA.h"

// variables

int CA_speed = 0;
int CA_distance = 0;
int CA_threshold = 50;

// STATE pointer to function
void (*CA_state)();


void us_set_distance(int d)
{
	CA_distance = d;
	CA_distance <= CA_threshold ? (CA_state = STATE(CA_waiting)) : (CA_state = STATE(CA_driving) );
	printf("US---------distance=%d--------> CA\n", CA_distance);
	CA_state();
}

STATE_define(CA_waiting)
{
	// state name
	CA_state_id = CA_waiting;
	printf("CA_waiting State: distance = %d		speed = %d \n", CA_distance, CA_speed);

	// state Action
	CA_speed = 0;
	printf("CA---------speed=%d--------> DC\n", CA_speed);
	DC_motor(CA_speed);


}


STATE_define(CA_driving)
{
	// state name
	CA_state_id = CA_driving;
	printf("CA_driving State: distance = %d		speed = %d \n", CA_distance, CA_speed);

	// state Action
	CA_speed = 30;
	printf("CA---------speed=%d--------> DC\n", CA_speed);
	DC_motor(CA_speed);


}

