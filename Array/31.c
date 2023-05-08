/*Write a C program that asks the user to enter 5 integers and stores them in an array. Print
the elements of the array to the console.*/
#include <stdio.h>

int main()
{
	printf("By Prajjwal Thapaliya\n");
	int n[5];
	for (int i = 0; i < 5; i++)
	{
		printf("Enter number:");
		scanf("%d", &n[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("\n%d", n[i]);
	}
	return 0;
}