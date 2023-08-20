/*
 * EX1
 *
 *  Created on: 19 Aug 2023
 *      Author: ABDEL RAHMAN FAID
 */

#include <stdio.h>
#include <stdlib.h>


int main()
{
	int N;
	printf("Enter an integer you want to check: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &N);

	if (N%2==0)
	{
		printf("%d is even", N);
	}
	else
	{
		printf("%d is odd", N);
	}
}



