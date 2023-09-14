/*
 * Unit2 Lesson5 HW4 EX4
 *
 *  Created on: 14 Sep 2023
 *      Author: ABDEL RAHMAN FAID
 *
 * Description: C program to calculate the power of a number using recursion.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ff fflush(stdin); fflush(stdout);
#define SIZE 5


int power(int N, int P)
{
	if(P!=0)
	{
		if(P>0)
		{
			N = N * power(N, P-1);
			return N;
		}
	}
	return 1;
}
int main()
{
	int N, P;

	printf("Enter base number: ");
	ff;
	scanf("%d", &N);
	printf("Enter power number(positive integer): ");
	ff;
	scanf("%d", &P);

	printf("%d^%d = %d", N, P, power(N, P));


}




