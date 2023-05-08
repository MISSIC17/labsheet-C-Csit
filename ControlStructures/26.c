/*Write a C program that uses a for loop with a break statement to find the first prime number
between 1 and 100. Print the prime number to the console.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int flag;
    printf("By Prajjwal Thapaliya\n");
    for (int i = 2; i <= 100; i++)
    {
        flag = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                // printf("%d is the first prime", i);
                flag += 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d is the first prime", i);
            break;
        }
    }
    return 0;
}