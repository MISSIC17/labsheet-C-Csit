/*36. Write a C program that defines two strings and compares them using the strcmp() function.
Print the result of the comparison to the console.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{

    printf("By Prajjwal Thapaliya\n");
    char s1[10] = "Hello";
    char s2[10] = "Everyone";
    int c = strcmp(s1, s2);
    if (c > 0)
    {
        printf("%s is greather than %s", s1, s2);
    }
    else if (c < 0)
    {
        printf("%s is smaller than %s", s1, s2);
    }
    else
    {
        printf("%s and %s are equal", s1, s2);
    }
    return 0;
}