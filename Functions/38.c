/*38. Write a C program that defines a function that takes two integers as arguments and returns
their sum. Call the function and print the result to the console.*/
#include <stdio.h>
int sum(int, int);
int main() {
	int a, b, s;
    printf("By Prajjwal Thapaliya\n");
	printf("Enter two numbers:");
	scanf("%d%d", &a, &b);
	s = sum(a,b);
	printf("sum is %d", s);
	return 0;
}

int sum(int a, int b) {
	return a+b;
}