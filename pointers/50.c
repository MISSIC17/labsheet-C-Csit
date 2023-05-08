/*50. Write a C program that uses pointers to iterate over an array of integers and print its values
to the console.*/
#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};

    printf("By Prajjwal Thapaliya\n");
    int *ptr = a;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(ptr + i));
    }
    return 0;
}