/*
 * state.h
 *
 *  Created on: 21 Mar 2024
 *      Author: mnj
 */

#ifndef STATE_H_
#define STATE_H_

#include "stdio.h"
#include "stdlib.h"

// Automatic STATE function generated
#define STATE_define(_statFUN_) void ST_##_statFUN_()
#define STATE(_statFUN_) ST_##_statFUN_

// States connection
void us_set_distance(int d);
void DC_motor(int S);



#endif /* STATE_H_ */
