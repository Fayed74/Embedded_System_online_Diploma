/*
 * HW2 EX7
 *
 *  Created on: 21 Aug 2023
 *      Author: ABDEL RAHMAN FAID
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{

	int N, i=1, TN=1;

	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &N);

	if(N<0)
	{
		printf("Error!!! Factorial of negative number doesn't exist.");
	}
	else if(N==0)
	{
		printf("Factorial of 0 is 1");
	}
	else
	{
		for(i=1; i<=N; i++)
			{
				TN = TN * i;
			}
			printf("Factorial = %d", TN);
	}
	return 0;
}



