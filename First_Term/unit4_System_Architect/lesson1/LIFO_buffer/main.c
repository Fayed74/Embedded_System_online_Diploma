/*
 * main.c
 *
 *  Created on: 14 Mar 2024
 *      Author: mnj
 */


#include "lifo.h"
#include "stdio.h"
#include "stdlib.h"

unsigned int buffer1[5]; // 584=20 bytes


void main()
{
	int i, temp=0;

	LIFO_Buf_t uart_lifo, I2C_lifo;
	// static allocation
	LIFO_init(&uart_lifo, buffer1, 5);
	// dynamic allocation
	unsigned int* buffer2 = (unsigned int*) malloc(5 * sizeof(unsigned int));
	LIFO_init(&I2C_lifo, buffer2, 5);

	for(i=0; i<7; i++)
	{
		if(LIFO_add_item(&uart_lifo, i) == LIFO_no_erro)
			printf("UART_LIFO add : %d \n", i);
	}

	for(i=0; i<7; i++)
		{
			if(LIFO_get_item(&uart_lifo, &temp) == LIFO_no_erro)
				printf("\n\nUART_LIFO get : %d \n", temp);
		}


}
