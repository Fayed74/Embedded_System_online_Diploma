/*
 * Unit2 Lesson6 HW5 EX3
 *
 *  Created on: 29 Sep 2023
 *      Author: ABDEL RAHMAN FAID
 *
 * Description: C program to add two complex numbers by passing structure to a function.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define ff fflush(stdin); fflush(stdout);


typedef struct{
	double real, imaginary;

}Scomplex;

Scomplex add_complex_numbers(Scomplex N1, Scomplex N2)
{
	Scomplex N;
	N.real = N1.real + N2.real;
	N.imaginary = N1.imaginary + N2.imaginary;

	return N;
}

Scomplex read_complex_numbers()
{
	Scomplex N;
	char temp[100];

	printf("Enter real and imaginary respectively: ");
	ff;
	fgets(temp, sizeof(N.real), stdin);
	N.real = atof(temp);
	ff;
	fgets(temp, sizeof(N.imaginary), stdin);
	N.imaginary = atof(temp);



	return N;
}


int main()
{
	Scomplex N1, N2, result;

	printf("For 1st complex number\n");
	N1 = read_complex_numbers();
	printf("\nFor 2nd complex number\n");
	N2 = read_complex_numbers();

	result = add_complex_numbers(N1, N2);
	printf("Sum=%.1lf+%.1lfi", result.real, result.imaginary);

	return 0;
}

