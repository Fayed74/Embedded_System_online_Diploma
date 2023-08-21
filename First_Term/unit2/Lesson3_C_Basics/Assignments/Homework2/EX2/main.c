/*
 * HW2 EX2
 *
 *  Created on: 20 Aug 2023
 *      Author: ABDEL RAHMAN FAID
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char alphabet, vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
	int numVowels, isvowel = 0;

	numVowels = sizeof(vowels)/sizeof(vowels[0]);
	printf("Enter an alphabet: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &alphabet);
	for(int i=0; i<numVowels; i++)
	{
		if(alphabet == vowels[i])
		{
			isvowel = 1;
			break;
		}
	}

	if(isvowel)
	{
		printf("%c is a vowel", alphabet);
	}
	else
	{
		printf("%c is a consonant", alphabet);
	}

	return 0;
}



