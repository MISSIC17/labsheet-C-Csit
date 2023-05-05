/*Write a C program that asks the user to enter two numbers and then performs logical
operations on them using the following operators: && (logical AND), || (logical OR), ! (logical
NOT). Print the results of each operation to the console.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{

    printf("By Prajjwal Thapaliya\n");
    int a, b;
    printf("Enter two numbers::>>");
    scanf("%d %d", &a, &b);
    if ((a > 0) && (b > 0))
    {
        printf("(%d>0) && (%d>0) : true\n", a, b);
    }
    else
    {
        printf("(%d>0) && (%d>0) :false\n", a, b);
    }
    if (a || b)
    {

        printf("(%d>0) || (%d>0) : true\n", a, b);
    }
    else
    {
        printf("(%d>0) || (%d>0) : false\n", a, b);
    }
    if (!(a > 0))
    {
        printf("%d>0: false\n",a);
    }
    else
    {

        printf("%d>0: true\n",a);
    }
    return 0;
}