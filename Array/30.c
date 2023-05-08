// 30. Write a C program that creates a two-dimensional array of 3 rows and 4 columns. Assign
// values to each element of the array and print them to the console.
#include <stdio.h>

int main()
{
    printf("By Prajjwal Thapaliya\n");
    int n[3][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {66, 67, 68, 69}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", n[i][j]);
        }
        printf("\n");
    }
    return 0;
}