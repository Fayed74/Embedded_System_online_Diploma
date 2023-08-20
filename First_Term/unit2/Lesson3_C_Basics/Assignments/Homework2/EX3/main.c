/*
 * HW2 EX3
 *
 *  Created on: 20 Aug 2023
 *      Author: ABDEL RAHMAN FAID
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{

	float N1, N2, N3, LN;

	printf("Enter three numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f", &N1, &N2, &N3);

	if(N1>N2 && N1>N3)
	{
		LN = N1;
	}
	else if(N2>N1 && N2>N3)
	{
		LN = N2;
	}
	else
	{
		LN = N3;
	}

	printf("Largest number = %.2f", LN);

	return 0;
}



