/*Write a C program that defines a function that takes an array of integers as a parameter. The
function should print the sum of the elements in the array to the console. Call the function
with an array of your choice.*/
#include <stdio.h>
void print_sum(int a[]);
int main()
{
    printf("By Prajjwal Thapaliya\n");
    int n[5] = {1, 2, 3, 4, 5};
    print_sum(n);
    return 0;
}

void print_sum(int a[5])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += a[i];
    }
    printf("Sum of array = %d", sum);
}