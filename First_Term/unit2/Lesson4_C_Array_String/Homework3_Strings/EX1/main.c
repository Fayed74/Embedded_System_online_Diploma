/*
 * Unit2 Lesson4 HW Strings EX1
 *
 *  Created on: 27 Aug 2023
 *      Author: ABDEL RAHMAN FAID
 *
 * Description: C program to find the frequency of characters in a String.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ff fflush(stdin); fflush(stdout);



int main()
{
	char string[100], character;
	int i, len, freq=0;

	printf("Enter a string: ");
	ff
	gets(string);
	printf("Enter a character to find frequency: ");
	ff
	scanf("%c", &character);


	len =strlen(string);
	for(i=0; i<len; i++)
	{
		if(string[i]==character)
		{
			freq++;
		}
	}
	printf("Frequency of %c = %d", character, freq);


	return 0;
}



