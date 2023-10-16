/*
 * Unit2 Lesson7 HW6 EX4
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
	char arr[15];
	char temp[2], No_elements;
	char* ptr;

	printf("Input the number of elements to store in the array (max 15): ");
	ff;
	fgets(temp, sizeof(temp), stdin);
	No_elements = atoi(temp);
	printf("\nInput %d number of elements in the array:\n", No_elements);

	for(int i=0; i<No_elements; i++)
	{
		printf("element-%d:", i+1);
		ff;
		fgets(temp, sizeof(temp), stdin);
		arr[i] = atoi(temp);
	}

	ptr = arr;
	printf("\nThe elements of array in reverse order are : ");
	for(int i=No_elements; i>0; i--)
	{
		printf("\nelement-%d : %d", i, *(ptr+i-1));

	}

}
