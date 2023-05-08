/*Write a C program that creates a one-dimensional array of 5 integers. Assign values to each
element of the array and print them to the console.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{

    printf("By Prajjwal Thapaliya\n");
    int A[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value for index %d::>", i);
        ;
        scanf("%d", &A[i]);
    }
    printf("\nThe values are\n ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", A[i]);
    }
}