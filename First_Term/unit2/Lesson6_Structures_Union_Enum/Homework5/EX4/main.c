/*
 * Unit2 Lesson6 HW5 EX4
 *
 *  Created on: 2 Oct 2023
 *      Author: ABDEL RAHMAN FAID
 *
 * Description: C program to store information of students using structure.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define ff fflush(stdin); fflush(stdout);


typedef struct{
	char name[100];
	char roll;
	float marks;

}Sstudent;

Sstudent read_student_info(int roll)
{
	Sstudent student;
	char temp[20];

	printf("\nFor roll number %d\n", roll);
	printf("Enter name: ");
	ff;
	fgets(student.name, 100, stdin);

	printf("Enter marks: ");
	ff;
	fgets(temp, 100, stdin);
	student.marks = atof(temp);

	return student;
}

Sstudent print_student_info(Sstudent students[], int num)
{
	printf("\nDisplaying information of students:\n");

	for(int i=0; i<num; i++)
	{
		printf("\nInformation for roll number %d:\n", i+1);
		printf("Name: %s", students[i].name);
		printf("Marks: %.2f\n", students[i].marks);
	}
}


int main()
{
	Sstudent students[10];

	for(int i=0; i<10; i++)
	{
		students[i] = read_student_info(i+1);
	}

	print_student_info(students, 10);




	return 0;
}

