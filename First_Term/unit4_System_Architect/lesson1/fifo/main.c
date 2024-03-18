/*
 * main.c
 *
 *  Created on: 15 Mar 2024
 *      Author: mnj
 */


#include "fifo.h"

void main()
{
	FIFO_buff_t FIFO_UART;
	element_type i, temp;

	if(FIFO_init(&FIFO_UART, uart_buffer, 5) == FIFO_no_error)
		printf("FIFO init done\n");

	for(i=0; i<7; i++)
	{
		printf("FIFO enqueue (%X) \n", i);
		if(FIFO_enqueue(&FIFO_UART, i) == FIFO_no_error)
			printf("\t fifo enqueue ------- Done\n");
		else
			printf("\t fifo enqueue ------ Failed\n");
	}

	FIFO_print(&FIFO_UART);

	if(FIFO_dequeue(&FIFO_UART, &temp) == FIFO_no_error)
		printf("fifo dequeue (%X) ------ Done\n", temp);
	if(FIFO_dequeue(&FIFO_UART, &temp) == FIFO_no_error)
		printf("fifo dequeue (%X) ------ Done\n", temp);

	FIFO_print(&FIFO_UART);
}
