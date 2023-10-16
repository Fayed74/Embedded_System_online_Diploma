/*
 * Unit2 Lesson7 HW6 EX3
 *
 *  Created on: 16 Oct 2023
 *      Author: ABDEL RAHMAN FAID
 *
 * Description: Write a program in C to print a string in reverse using a pointer.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define ff fflush(stdin); fflush(stdout);

//#pragma pack(1)

int main()
{
	char sentence[100];

	printf("Input a string : ");
	ff;
	fgets(sentence, sizeof(sentence), stdin);

	char* ptr;
	ptr=sentence;

	printf("Reverse of the string is : ");
	for(int i=strlen(sentence)-2; i>=0; i--)
	{
		printf("%c", *(ptr+i));
	}

}
