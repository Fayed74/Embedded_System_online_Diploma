/*
 * Unit2 Lesson6 HW5 EX5
 *
 *  Created on: 3 Oct 2023
 *      Author: ABDEL RAHMAN FAID
 *
 * Description: C program to find area of a circle, passing arguments to macros.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define ff fflush(stdin); fflush(stdout);
#define pi 3.1415
#define area(r) pi*r*r

int main()
{
	float radius, area;
	char temp[20];

	printf("Enter radius: ");
	ff;
	fgets(temp, 20, stdin);
	radius = atof(temp);
	area = area(radius);

	printf("Area=%.2f", area);
}




