/*
 * Unit2 Lesson7 Lab1
 *
 *  Created on: 12 Oct 2023
 *      Author: ABDEL RAHMAN FAID
 *
 * Description: It is required to calculate the summation weight of 5 boxes. The user should enter the boxes.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define ff fflush(stdin); fflush(stdout);

int main()
{
	int x[5];
	int sum = 0;
	int* px;

	px = x;
	printf("Enter boxes weight: ");
	ff;

	for(int i=0; i<sizeof(x)/sizeof(int); i++, px++)
	{
		scanf("%d", px);
	}

	px=x;

	for(int i=0; i<sizeof(x)/sizeof(int); ++i, px++)
	{
		printf("%d \t", *px);
	}

	px=x;
	for(int i=0; i<sizeof(x)/sizeof(int); ++i, px++)
		{
			sum+=*px;
		}
	printf("\nsum = %d", sum);
}
