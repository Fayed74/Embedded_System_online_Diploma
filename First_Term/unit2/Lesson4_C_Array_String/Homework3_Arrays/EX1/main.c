/*
 * Unit2 Lesson4 HW Arrays EX1
 *
 *  Created on: 25 Aug 2023
 *      Author: ABDEL RAHMAN FAID
 *
 * Description: Write a C program to find sum of two matrix of order 2*2 using multidimensional arrays where,
 * elements of matrix are entered by user.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ff fflush(stdin); fflush(stdout);



int main()
{
	int i, j;
	float m1[2][2], m2[2][2], sum[2][2];

	printf("Enter the elements of 1st matrix\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("Enter a%d%d: ", i+1, j+1);
			ff
			scanf("%f", &m1[i][j]);
		}
	}

	printf("Enter the elements of 2nd matrix\n");
		for(i=0; i<2; i++)
		{
			for(j=0; j<2; j++)
			{
				printf("Enter b%d%d: ", i+1, j+1);
				ff
				scanf("%f", &m2[i][j]);
			}
		}

		printf("Sum Of Matrix:\n");
		for(i=0; i<2; i++)
				{
					for(j=0; j<2; j++)
					{
						sum[i][j] = m1[i][j] + m2[i][j];
					}
				}



		for(i=0; i<2; i++)
				{
					for(j=0; j<2; j++)
					{
						printf("%.1f\t", sum[i][j]);
					}
					printf("\n");
				}


	return 0;
}



