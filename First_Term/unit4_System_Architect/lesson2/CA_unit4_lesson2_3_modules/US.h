/*
 * US.h
 *
 *  Created on: 21 Mar 2024
 *      Author: mnj
 */

#ifndef US_H_
#define US_H_
#include "state.h"

//define states

enum{
	US_busy
}US_state_id;


//declare states functions US
STATE_define(US_busy);

void US_init();

// STATE pointer to function
extern void (*US_state)();

#endif /* US_H_ */
