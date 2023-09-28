/*
 * Unit2 Lesson6 HW5 EX1
 *
 *  Created on: 28 Sep 2023
 *      Author: ABDEL RAHMAN FAID
 *
 * Description: C program to store information(name, roll and marks) of a student using structure.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define ff fflush(stdin); fflush(stdout);


typedef struct{
	char name[20];
	int roll;
	float marks;

}Sstudent;

Sstudent ReadStudentInfo()
{
	Sstudent student;
	printf("Enter information of students:\n");
	printf("\nEnter name: ");
	ff;
	fgets(student.name, 20, stdin);

	char temp_roll[20];
	printf("Enter roll number: ");
	ff;
	fgets(temp_roll, sizeof(temp_roll), stdin);
	student.roll = atoi(temp_roll);

	char temp_marks[20];
	printf("Enter marks: ");
	ff;
	fgets(temp_marks, sizeof(temp_marks), stdin);
	student.marks = atof(temp_marks);

	return student;
}

void PrintStudentInfo(Sstudent student)
{

	printf("\nName: %s", student.name);
	printf("Roll: %d", student.roll);
	printf("\nMarks: %.2f", student.marks);

}

int main()
{
	Sstudent result = ReadStudentInfo();
	PrintStudentInfo(result);

	return 0;
}

