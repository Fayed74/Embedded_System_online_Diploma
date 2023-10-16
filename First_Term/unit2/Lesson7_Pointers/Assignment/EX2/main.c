/*
 * Unit2 Lesson7 HW6 EX2
 *
 *  Created on: 16 Oct 2023
 *      Author: ABDEL RAHMAN FAID
 *
 * Description: Write a program in C to print all the alphabets using a pointer.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define ff fflush(stdin); fflush(stdout);

//#pragma pack(1)

int main()
{
	char alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char* a = alphabets;

	printf("The alphabets are:\n");
	for(int i=0; i<sizeof(alphabets); i++)
	{
		printf("%c ", *a);
		a++;
	}
}
