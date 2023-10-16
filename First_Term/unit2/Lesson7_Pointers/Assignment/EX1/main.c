/*
 * Unit2 Lesson7 HW6 EX1
 *
 *  Created on: 16 Oct 2023
 *      Author: ABDEL RAHMAN FAID
 *
 * Description: Write a program in C to demonstrate how to handle the pointers in the program.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define ff fflush(stdin); fflush(stdout);

//#pragma pack(1)

int main()
{
	char m = 29;


	printf("Address of m : 0x%x\n", (unsigned int)&m);
	printf("value of m : %d\n", m);

	char* ab;
	ab = &m;

	printf("\nAddress of pointer ab : 0x%x\n", (unsigned int)&ab);
	printf("Content of pointer ab : %d\n", (unsigned int)*ab);

	m = 34;
	printf("\nAdress of pointer ab : 0x%x\n", (unsigned int)&ab);
	printf("Content of pointer ab : %d\n", (unsigned int)*ab);

	*ab = 7;
	printf("\nAddress of m : 0x%x\n", (unsigned int)&m);
	printf("value of m : %d\n", m);


	return 0;
}
