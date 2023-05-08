/*40. Write a C program that defines a function that takes an array of integers and its size as
arguments, and returns the sum of its elements. Call the function and print the result to the
console.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
int getSum(int A[], int length);
int main()
{

    printf("By Prajjwal Thapaliya\n");
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = getSum(A, 10);
    printf("Sum of the array = %d", sum);
}
int getSum(int A[20], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += A[i];
    }
    return sum;
}