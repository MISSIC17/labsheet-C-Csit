/*51. Write a C program that uses pointer arithmetic to access individual elements of an array of
integers. Print the values to the console*/
#include <stdio.h>

int main() {
	int a[5];
    printf("By Prajjwal Thapaliya\n");
	printf("Enter 5 numbers: ");
	for (int i=0; i<5; i++) {
		scanf("%d", a+i);
	}
	for (int i=0; i<5; i++) {
		printf("\n%d", *(a+i));
	}
	return 0;
}