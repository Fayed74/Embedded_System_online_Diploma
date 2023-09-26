/*
 * Unit2 Lesson6 Lab1
 *
 *  Created on: 27 Sep 2023
 *      Author: ABDEL RAHMAN FAID
 *
 * Description: Write a program Adding Two Complex Numbers using structure and function.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define ff fflush(stdin); fflush(stdout);


typedef struct{
	double m_real;
	double m_imaginary;

}Scomplex;

Scomplex ReadComplex(char name[])
{
	Scomplex C;

	printf("Enter %s complex number Ex(2, -3): ", name);
	ff;
	scanf("%lf, %lf", &C.m_real, &C.m_imaginary);

	return C;
}

Scomplex AddComplex(Scomplex A, Scomplex B)
{
	Scomplex C;

	C.m_real = A.m_real + B.m_real;
	C.m_imaginary = A.m_imaginary + B.m_imaginary;

	return C;
}

void PrintComplex(char name[], Scomplex C)
{
	printf("%s = (%lf) + j (%lf)\r\n", name,  C.m_real, C.m_imaginary);
}

int main()
{
	Scomplex X, Y, Z;

	X = ReadComplex("X");
	Y = ReadComplex("Y");
	Z = AddComplex(X, Y);

	PrintComplex("Z", Z);

	return 0;
}


