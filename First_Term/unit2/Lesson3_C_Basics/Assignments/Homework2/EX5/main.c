/*
 * HW2 EX5
 *
 *  Created on: 20 Aug 2023
 *      Author: ABDEL RAHMAN FAID
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{

	char alphabet;
	int ascii;

	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &alphabet);

	ascii = (int)alphabet;

	if(ascii>=65 && ascii<=122)
	{
		printf("%c is an alphabet", alphabet);
	}
	else
	{
		printf("%c is not an alphabet", alphabet);
	}

	return 0;
}



