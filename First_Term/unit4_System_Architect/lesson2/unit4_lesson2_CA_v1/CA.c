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
int US_Get_distance_random(int l, int r, int count);

STATE_define(CA_waiting)
{
	// state name
	CA_state_id = CA_waiting;

	// state Action
	CA_speed = 0;

	// Event check
	// US_Get_distance(CA_distance)
	CA_distance = US_Get_distance_random(45, 55, 1);
	CA_distance <= CA_threshold ? (CA_state = STATE(CA_waiting)) : (CA_state = STATE(CA_driving) );
	printf("CA_waiting State: distance = %d		speed = %d \n", CA_distance, CA_speed);

}


STATE_define(CA_driving)
{
	// state name
	CA_state_id = CA_driving;

	// state Action
	CA_speed = 30;

	// Event check
	// US_Get_distance(CA_distance)
	CA_distance = US_Get_distance_random(45, 55, 1);
	CA_distance <= CA_threshold ? (CA_state = STATE(CA_waiting)) : (CA_state = STATE(CA_driving) );
	printf("CA_driving State: distance = %d		speed = %d \n", CA_distance, CA_speed);

}

int US_Get_distance_random(int l, int r, int count)
{
	// this will generate random number in range l and r
	int i, rand_num;
	for(i=0; i<count; i++)
	{
		rand_num = (rand() % (r - l + 1)) + l;
		return rand_num;
	}
	return 0;
}

