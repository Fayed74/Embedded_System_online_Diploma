/*
 * HW2 EX6
 *
 *  Created on: 20 Aug 2023
 *      Author: ABDEL RAHMAN FAID
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{

	int N, TN = 0;

	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &N);

	for(int i=0; i<=N; i++)
	{
		TN += i;
	}
	printf("Sum = %d", TN);
	return 0;
}



