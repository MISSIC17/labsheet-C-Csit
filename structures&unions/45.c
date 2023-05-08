/*45. Write a C program that uses nested structures to store information about a car, including its
make, model, and year. Create a structure to store information about the engine, including
its horsepower and displacement. Add the engine structure as a member of the car structure
and print the values of the car and engine to the console*/
#include <stdio.h>
#include <string.h>

struct engine {
	float horsepower;
	float displacement;
};

struct car {
	char make[20];
	char model[20];
	int year;
	struct engine eng;
};

int main() {
	struct car c;
    printf("By Prajjwal Thapaliya\n");
	strcpy(c.make, "Tesla");
	strcpy(c.model, "Model Y");
	c.year = 2018;
	c.eng.horsepower = 420;
	c.eng.displacement = 999;
	
	printf("Make: %s, Model: %s, Year: %d\n", c.make, c.model,  c.year);
	printf("Horsepower: %f, Displacement: %f", c.eng.horsepower, c.eng.displacement);
	return 0;
}