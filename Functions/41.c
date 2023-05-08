/*41. Write a C program that defines a function that takes two integer pointers as arguments and
swaps their values. Call the function and print the values of the pointers before and after the
swap.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
void swap(int *a, int *b);
int main()
{
    int a = 6, b = 9;
    printf("By Prajjwal Thapaliya\n");
    printf("Before swap\n");
    printf("%d %d\n", a, b);
    swap(&a, &b);
    printf("After swap\n");
    printf("%d %d\n", a, b);
}
void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}