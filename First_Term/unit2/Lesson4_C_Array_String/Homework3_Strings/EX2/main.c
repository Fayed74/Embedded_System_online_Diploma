/*
 * Unit2 Lesson4 HW Strings EX2
 *
 *  Created on: 27 Aug 2023
 *      Author: ABDEL RAHMAN FAID
 *
 * Description: C program to find the length of a String.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ff fflush(stdin); fflush(stdout);



int main()
{
	char string[100];
	int i=0, len=0;

	printf("Enter a string: ");
	ff
	gets(string);


	while(string[i]!=0)
	{
		len+=1;
		i++;
	}

	printf("Length of string: %d", len);

	return 0;
}



