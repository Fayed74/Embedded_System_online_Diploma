/*
 * Unit2 Lesson4 HW Arrays EX2
 *
 *  Created on: 27 Aug 2023
 *      Author: ABDEL RAHMAN FAID
 *
 * Description: This program takes n number of element from user(where, n is specified by user), stores data in an array
 * and calculates the average of those numbers.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ff fflush(stdin); fflush(stdout);



int main()
{
	int i, n;
	float data[10], sum=0, average;

	printf("Enter the numbers of data: ");
	ff
	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		printf("Enter number: ");
		ff
		scanf("%f", &data[i]);
		sum+=data[i];
	}

	average = sum/i;
	printf("Average = %.2f", average);

	return 0;
}



