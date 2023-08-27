/*
 * Unit2 Lesson4 HW Arrays EX5
 *
 *  Created on: 27 Aug 2023
 *      Author: ABDEL RAHMAN FAID
 *
 * Description: C program to search an element in Array.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ff fflush(stdin); fflush(stdout);



int main()
{
	int n, element;
	int array[10];

	printf("Enter no of elements : ");
	ff
	scanf("%d", &n);

	for(int i=0; i<n; i++)
	{
		array[i] = (i+1)*11;
		printf("%d ", array[i]);
	}
	printf("\nEnter the elements to be searched : ");
	ff
	scanf("%d", &element);

	for(int i=0; i<n; i++)
	{
		if(element==array[i])
		{
			printf("Number found at the location = %d", i+1);
		}

	}


	return 0;
}



