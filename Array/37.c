/*37. Write a C program that defines two strings and copies the contents of one string to the other
using the strcpy() function. Print the copied string to the console.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{

    printf("By Prajjwal Thapaliya\n");
    char s1[10] = "Hello", s2[10];
    strcpy(s2, s1);
    printf("The copied string is %s", s2);
}