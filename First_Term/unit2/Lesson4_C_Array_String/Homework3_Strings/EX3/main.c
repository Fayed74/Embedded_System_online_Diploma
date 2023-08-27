/*
 * Unit2 Lesson4 HW Strings EX3
 *
 *  Created on: 27 Aug 2023
 *      Author: ABDEL RAHMAN FAID
 *
 * Description: C program to Reverse String Without Using Library Function.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ff fflush(stdin); fflush(stdout);



int main()
{
	char string[100], Rstring[100];
	int i, len=0, Rlen=0;

	printf("Enter the string : ");
	ff
	gets(string);
	len = strlen(string);
	Rlen = len-1;

	for(i=0; i<len; i++)
	{
		Rstring[Rlen] = string[i];
		Rlen-=1;
	}
	printf("Reverse string is : %s", Rstring);


	return 0;
}



