/*
 * Unit2 Lesson5 HW4 EX2
 *
 *  Created on: 13 Sep 2023
 *      Author: ABDEL RAHMAN FAID
 *
 * Description: C program to calculate factorial of a number using recursion.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ff fflush(stdin); fflush(stdout);
#define SIZE 5




int factorial(int N)
{
	if((N==0) || (N==1))
		return 1;

	return N * factorial(N-1);


}

int main()
{
	int N;

	printf("Enter a positive integer: ");
	ff;
	scanf("%d", &N);
	printf("Factorial of %d = %d", N, factorial(N));

}



