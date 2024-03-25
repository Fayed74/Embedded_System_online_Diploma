/*
 * US.c
 *
 *  Created on: 21 Mar 2024
 *      Author: mnj
 */

#include "US.h"
#include "state.h"

// variables


int US_distance = 0;


// STATE pointer to function
void (*US_state)();
int US_Get_distance_random(int l, int r, int count);

void us_init()
{
	// init US Driver
	printf("US_init \n");
}


STATE_define(US_busy)
{
	// state name
	US_state_id = US_busy;

	// state Action
	US_distance = US_Get_distance_random(45, 55, 1);

	printf("US_waiting State: distance = %d	\n", US_distance);
	us_set_distance(US_distance);
	US_state(US_busy);
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

