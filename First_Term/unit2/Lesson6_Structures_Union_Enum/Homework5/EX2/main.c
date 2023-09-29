/*
 * Unit2 Lesson6 HW5 EX2
 *
 *  Created on: 29 Sep 2023
 *      Author: ABDEL RAHMAN FAID
 *
 * Description: C program to add two distances(in inch-feet) system using structures.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define ff fflush(stdin); fflush(stdout);


typedef struct{
	int feet;
	float inch;
}Sdistance;

Sdistance add_distances(Sdistance d1, Sdistance d2)
{
	Sdistance d;
	d.feet = d1.feet + d2.feet;
	d.inch = d1.inch + d2.inch;

	if(d.inch>=12)
	{
		d.feet += (int)(d.inch / 12);
		d.inch = d.inch - (int)(d.inch/12)*12;
	}
	return d;
}

Sdistance read_distances()
{
	Sdistance d;
	char temp[100];

	printf("Enter feet: ");
	ff;
	fgets(temp, sizeof(d.feet), stdin);
	d.feet = atoi(temp);

	printf("Enter inch: ");
	ff;
	fgets(temp, sizeof(d.inch), stdin);
	d.inch = atof(temp);

	return d;
}


int main()
{
	Sdistance d1, d2, result;

	printf("Enter information for 1st distance\n");
	d1 = read_distances();
	printf("\nEnter information for 2nd distance\n");
	d2 = read_distances();

	result = add_distances(d1, d2);
	printf("\nSum of distances=%d'-%.1f\"", result.feet, result.inch);

	return 0;
}

