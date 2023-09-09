/*
 * Unit2 Lesson5 Lab1
 *
 *  Created on: 09 Sep 2023
 *      Author: ABDEL RAHMAN FAID
 *
 * Description: C program to use function to find factorial of a number.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ff fflush(stdin); fflush(stdout);
#define SIZE 5


int factorial(int x);

int main()
{
	printf("factorial of (%d) = %d", 0, factorial(0));
}


int factorial(int x)
{
	int f=1;

	for(; x>0; x--)
	{
		f *= x;
	}
	return f;
}


