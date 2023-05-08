/*52. Write a C program that dynamically allocates memory using malloc() and calloc() function for
an array of integers, prompts the user to enter the size of the array, redefined the size of the
array using realloc() fiction and then deallocates the memory using the free() function.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a;
    printf("By Prajjwal Thapaliya\n");
    a = (int *)malloc(5 * sizeof(int));
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    a = (int *)realloc(a, n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter number: ");
        scanf("%d", a + i);
    }
    printf("The numbers are ::\n");
    for (int i = 0; i < n; i++)
    {
        printf("\n%d", *(a + i));
    }
    free(a);
}