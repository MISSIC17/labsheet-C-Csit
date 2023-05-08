/*Write a C program that asks the user to enter a string and then calculates and prints the
length of the string.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{

    printf("By Prajjwal Thapaliya\n");
    char s[50];
    printf("Enter a string::");
    gets(s);
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    printf("The length of the string is %d", i);
    return 0;
}