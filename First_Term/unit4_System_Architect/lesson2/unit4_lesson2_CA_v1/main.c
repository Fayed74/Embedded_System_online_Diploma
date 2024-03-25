/*
 * main.c
 *
 *  Created on: 21 Mar 2024
 *      Author: mnj
 */


#include "CA.h"

void setup()
{
	// init all the drivers
	// init IRQ ...
	// init HAL US_Driver DC_Driver
	// init Block
	// set states pointers for each block

	CA_state = STATE(CA_waiting);
}

void main()
{
	setup();

	while(1)
	{
		// call state for each block
		CA_state();
	}
}
