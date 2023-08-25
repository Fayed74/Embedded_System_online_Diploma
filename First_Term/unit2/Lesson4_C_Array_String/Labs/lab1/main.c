/*
 * Unit2 Lesson4 lab1
 *
 *  Created on: 25 Aug 2023
 *      Author: ABDEL RAHMAN FAID
 *
 * Description: Shows how to scan 10 students degree from user, stores them in a single array, and then prints them.
 */
#include <stdio.h>
#include <stdlib.h>
#define ff fflush(stdin); fflush(stdout);



int main()
{
	float degrees[10];
	int i;

	for(i=0; i<10; i++)
	{
		printf("Enter student %d degree: ", i+1);
		ff
		scanf("%f", &degrees[i]);
	}

	for(i=0; i<10; i++)
	{
		printf("\nStudent %d degree is %f", i+1, degrees[i]);
	}

	return 0;
}



