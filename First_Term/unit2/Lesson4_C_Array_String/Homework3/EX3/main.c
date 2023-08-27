/*
 * Unit2 Lesson4 HW Arrays EX3
 *
 *  Created on: 27 Aug 2023
 *      Author: ABDEL RAHMAN FAID
 *
 * Description: This program asks user to enter matrix (size of matrix is speified by user) and this program finds the transpose
 * of that matrix and displays it.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ff fflush(stdin); fflush(stdout);



int main()
{
	int i, j, rows, columns;

	printf("Enter rows and column of matrix: ");
	ff
	scanf("%d %d", &rows, &columns);
	ff
	printf("\nEnter elements of matrix:");

	float matrix[rows][columns];

	for(i=0; i<rows; i++)
	{
		for(j=0; j<columns; j++)
		{
			printf("Enter elements a%d%d: ", i+1, j+1);
			ff
			scanf("%f", &matrix[i][j]);
		}
	}

	printf("\nEntered Matrix:\n");

	for(i=0; i<rows; i++)
	{
		for(j=0; j<columns; j++)
		{
			printf("%.2f\t: ", matrix[i][j]);
		}
		printf("\n");
	}

	printf("\nTranspose of Matrix:\n");

	for(j=0; j<columns; j++)
	{
		for(i=0; i<rows; i++)
		{
			printf("%.2f\t", matrix[i][j]);
		}
		printf("\n");
	}


	return 0;
}



