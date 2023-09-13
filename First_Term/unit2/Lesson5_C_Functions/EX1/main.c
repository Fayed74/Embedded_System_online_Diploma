/*
 * Unit2 Lesson5 HW4 EX1
 *
 *  Created on: 13 Sep 2023
 *      Author: ABDEL RAHMAN FAID
 *
 * Description: Prime Numbers Between two Intervals by making User-defined Function.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ff fflush(stdin); fflush(stdout);
#define SIZE 5


int isPrime(int n)
{
        int i;
        if(n<2)
                return 0;
        for(i=2; i<=n/2; i++)
        {
                if(n%i==0)
                        return 0;
        }
        return 1;
}

int main()
{
        int N1, N2, i;
        printf("Enter two numbers(intervals): ");
        ff;
        scanf("%d %d", &N1, &N2);

        printf("Prime numbers between %d and %d are: ", N1, N2);
        for(i=N1; i<=N2; i++)
        {
                if(isPrime(i))
                {
                        printf("%d ", i);
                }
        }


        return 0;
}

