/*
Write a C program that uses the ternary operator to check if a given integer is positive or
negative. Print a message to the console indicating the result.
*/
#include <stdio.h>

int main() {
    int num;
    printf("By Prajjwal Thapaliya\n");
    printf("Enter an integer: ");
    scanf("%d", &num);

    num >= 0 ? printf("%d is positive.\n", num) : printf("%d is negative.\n", num);

    return 0;
}
