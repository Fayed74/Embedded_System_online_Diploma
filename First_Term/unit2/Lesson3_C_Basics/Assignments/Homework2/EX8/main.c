/*
 * HW2 EX8
 *
 *  Created on: 21 Aug 2023
 *      Author: ABDEL RAHMAN FAID
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float N1, N2, output;
	char operator;

	printf("Enter operator either + or - or * or divide : ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &operator);
	printf("Enter two operands: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f", &N1, &N2);

	switch(operator)
	{
	case '+':
		output = N1 + N2;
		printf("%.1f %c %.1f = %.1f", N1, operator, N2, output);
		break;
	case '-':
		output = N1 - N2;
		printf("%.1f %c %.1f = %.1f", N1, operator, N2, output);
		break;
	case '*':
		output = N1 * N2;
		printf("%.1f %c %.1f = %.1f", N1, operator, N2, output);
		break;
	case '/':
		output = N1 / N2;
		printf("%.1f %c %.1f = %.1f", N1, operator, N2, output);
		break;
	}
	return 0;
}



