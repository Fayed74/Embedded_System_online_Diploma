/*
 * Unit2 Lesson7 HW6 EX5
 *
 *  Created on: 16 Oct 2023
 *      Author: ABDEL RAHMAN FAID
 *
 * Description: Write a program in C to show a pointer to an array which contents are pointer to structure.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define ff fflush(stdin); fflush(stdout);

//#pragma pack(1)

typedef struct{
		char m_name[50];
		int m_id;
	}SEmp;

int main()
{


	//(*ptr)[SEmp* PEmp];

	SEmp emp1 = {"Alex", 1002};
	SEmp emp2 = {"Fayed", 74};

	SEmp* EmpArr[] = {&emp1, &emp2};
	SEmp** EmpPtr = EmpArr;


	printf("Employee name: %s", (*EmpPtr)->m_name);
	printf("\nEnployee ID: %d", (*EmpPtr)->m_id);
}
