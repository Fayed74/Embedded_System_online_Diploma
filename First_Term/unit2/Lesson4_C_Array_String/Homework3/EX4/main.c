/*
 * Unit2 Lesson4 HW Arrays EX4
 *
 *  Created on: 27 Aug 2023
 *      Author: ABDEL RAHMAN FAID
 *
 * Description: C program to insert an element in an Array.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ff fflush(stdin); fflush(stdout);



int main()
{
	int n, array[10], element, location;

	printf("Enter no of elements : ");
	ff
	scanf("%d", &n);

	for(int i=0; i<n; i++)
	{
		array[i] = i+1;
		printf("%d ", array[i]);
	}

	printf("\nEnter the element to be inserted : ");
	ff
	scanf("%d", &element);
	printf("\nEnter the location : ");
	ff
	scanf("%d", &location);

	for(int i=n; i>=location; i--)
	{
		array[i] = array[i-1];
	}
	array[location-1]=element;

	for(int i=0; i<n+1; i++)
	{
		printf("%d ", array[i]);
	}




	return 0;
}



