/*
 * fifo.h
 *
 *  Created on: 15 Mar 2024
 *      Author: mnj
 */


#ifndef FIFO_H_
#define FIFO_H_


#include "stdint.h"
#include "stdio.h"

// User Configuration
// select the element type (uint8_t, uint16_t, uint32_t, ...)
#define element_type uint8_t
// create buffer1
#define width1 5
element_type uart_buffer[width1];

// FIFO DATA TYPES

typedef struct{
	unsigned int lenght;
	unsigned int count;
	element_type* base;
	element_type* head;
	element_type* tail;
}FIFO_buff_t;

typedef enum{
	FIFO_no_error,
	FIFO_full,
	FIFO_empty,
	FIFO_null
}FIFO_buff_status;

// FIFO APIs
FIFO_buff_status FIFO_init(FIFO_buff_t* fifo, element_type* buff, element_type length);
FIFO_buff_status FIFO_enqueue(FIFO_buff_t* fifo, element_type item);
FIFO_buff_status FIFO_dequeue(FIFO_buff_t* fifo, element_type* item);
FIFO_buff_status FIFO_IS_FULL(FIFO_buff_t* fifo);
void 			 FIFO_print(FIFO_buff_t* fifo);


#endif
