/*
 * HW2 EX4
 *
 *  Created on: 20 Aug 2023
 *      Author: ABDEL RAHMAN FAID
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{

	float N;

	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &N);

	if(N>0)
	{
		printf("%.2f is positive", N);
	}
	else if(N<0)
	{
		printf("%.2f is negative", N);
	}
	else
	{
		printf("You entered zero.");
	}


	return 0;
}



