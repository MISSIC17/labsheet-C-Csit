/*Write a C program that uses the conditional operator to check if a given integer is divisible
by 3 or 5. Print a message to the console indicating the result.
*/
#include <stdio.h>

int main()
{
    int num;
    printf("By Prajjwal Thapaliya\n");

    printf("Enter an integer: ");
    scanf("%d", &num);

    (num % 3 == 0 || num % 5 == 0) ? (num % 3 == 0 && num % 5 == 0) ? printf("%d is divisible by both 3 and 5\n", num) : (num % 3 == 0) ? printf("%d is divisble by 3", num)
                                                                                                                                        : printf("%d is divisble by 5", num)
                                   : printf("%d is not divisible by 3 nor 5.\n", num);

    return 0;
};