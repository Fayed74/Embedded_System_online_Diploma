/*
 * Unit2 Lesson5 HW4 EX3
 *
 *  Created on: 14 Sep 2023
 *      Author: ABDEL RAHMAN FAID
 *
 * Description: C program to reverse a sentence using recursion.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ff fflush(stdin); fflush(stdout);
#define SIZE 5


void reverseSentence()
{
	char c;

	scanf("%c", &c);
	if(c != '\n')
	{
		reverseSentence();
		printf("%c", c);
	}

}
int main()
{
	printf("Enter a sentence: ");
	ff;
	reverseSentence();
}




