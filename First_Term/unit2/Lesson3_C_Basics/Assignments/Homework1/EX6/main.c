/*
 * EX6
 *
 *  Created on: 19 Aug 2023
 *      Author: ABDEL RAHMAN FAID
 */

#include <stdio.h>
#include <stdlib.h>


int main()
{
	float N1, N2, a, b;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &N1);
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &N2);
	a = N2; b = N1;
	printf("\n");
	printf("After swapping, value of a = %.2f\nAfter swapping, value of b = %.1f", a, b);
}



