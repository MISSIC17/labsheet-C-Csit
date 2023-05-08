/*Write a C program that uses a while loop with a continue statement to print the numbers
from 1 to 10 to the console, skipping the number 5.*/
#include <stdio.h>
int main()
{
    int n = 1;
    printf("By Prajjwal Thapaliya\n");
    while (n <= 10)
    {
        if (n == 5)
        {
            n++;
            continue;
        }
        printf("%d\t", n);
        n++;
    }
    return 0;
}