/*
 * fifo.c
 *
 *  Created on: 15 Mar 2024
 *      Author: mnj
 */



#include "fifo.h"


FIFO_buff_status FIFO_init(FIFO_buff_t* fifo, element_type* buff, element_type length)
{
	// check
	if(buff == NULL)
		return FIFO_null;

	fifo->base = buff;
	fifo->head = buff;
	fifo->tail = buff;
	fifo->lenght = length;
	fifo->count = 0;

	return FIFO_no_error;
}

FIFO_buff_status FIFO_enqueue(FIFO_buff_t* fifo, element_type item)
{
	if(! fifo->base || ! fifo->head || ! fifo->tail)
			return FIFO_null;
	if(FIFO_IS_FULL(fifo) == FIFO_full)
		return FIFO_full;

	*(fifo->head) = item;
	fifo->count++;
	// circular
	if(fifo->head == fifo->base + (fifo->count * sizeof(element_type)))
		fifo->head = fifo->base;
	else
		fifo->head++;

	return FIFO_no_error;

}

FIFO_buff_status FIFO_dequeue(FIFO_buff_t* fifo, element_type* item)
{
	if(! fifo->base || ! fifo->head || ! fifo->tail)
				return FIFO_null;

	if(fifo->count == 0)
		return FIFO_empty;

	*item = *(fifo->tail);
	fifo->count--;

	if(fifo->tail == fifo->base + (fifo->count * sizeof(element_type)))
		fifo->tail = fifo->base;
	else
		fifo->tail++;

	return FIFO_no_error;

}

FIFO_buff_status FIFO_IS_FULL(FIFO_buff_t* fifo)
{
	if(! fifo->base || ! fifo->head || ! fifo->tail)
				return FIFO_null;

	if(fifo->count == fifo->lenght )
			return FIFO_full;

	return FIFO_no_error;
}

void FIFO_print(FIFO_buff_t* fifo)
{
	element_type* temp;
	int i;

	if(fifo->count == 0)
		return FIFO_empty;
	else
	{
		temp = fifo->tail;
		printf("\n ===============fifo_print===================\n");
		for (i=0; i<fifo->count; i++)
		{
			printf("\t %X \n", *temp);
			temp++;
		}
		printf("==============\n");
	}

}
