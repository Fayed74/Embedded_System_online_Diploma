/*
 * lifo.h
 *
 *  Created on: 14 Mar 2024
 *      Author: mnj
 */


#ifndef LIFO_H_
#define LIFO_H_

#include "stdio.h"
#include "stdlib.h"


// type definitions
typedef struct {
	unsigned int length;
	unsigned int count;
	unsigned int* base;
	unsigned int* head;
}LIFO_Buf_t;

typedef enum {
	LIFO_no_erro,
	LIFO_full,
	LIFO_empty,
	LIFO_Null
}LIFO_status;

// APIs

LIFO_status LIFO_add_item(LIFO_Buf_t* lifo_buf, unsigned int item);
LIFO_status LIFO_get_item(LIFO_Buf_t* lifo_buf, unsigned int* item);
LIFO_status LIFO_init(LIFO_Buf_t* lifo_buf, unsigned int* buf, unsigned int length);



#endif
