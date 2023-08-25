/*
 * Unit2 Lesson4 lab2
 *
 *  Created on: 25 Aug 2023
 *      Author: ABDEL RAHMAN FAID
 *
 * Description: Calculate and print the transpose of 3x3 Matrix.
 */
#include <stdio.h>
#include <stdlib.h>
#define ff fflush(stdin); fflush(stdout);



int main()
{
	float matrix[3][3];
	int i,j;

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Enter the item(%d, %d): ", i, j);
			ff
			scanf("%f", &matrix[i][j]);
		}
	}

	printf("\nThe matrix is\n");

	for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
			{
				printf("%.2f\t", matrix[i][j]);
			}
			printf("\n");
		}

	printf("\nThe transpose is\n");

		for(i=0; i<3; i++)
			{
				for(j=0; j<3; j++)
				{
					printf("%.2f\t", matrix[j][i]);
				}
				printf("\n");
			}

	return 0;
}



