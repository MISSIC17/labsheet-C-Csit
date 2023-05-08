/*42. Write a C program that creates a structure to store information about a student, including
their name, ID number, and GPA. Declare a variable of this structure type and initialize its
values. Print the values of the structure to the console*/
#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    int id;
    float gpa;
};

int main()
{
    printf("By Prajjwal Thapaliya\n");
    struct student s;
    strcpy(s.name, "Prajjwal");
    s.id = 34;
    s.gpa = 3.71;
    printf("Name: %s, Id: %d, GPA: %.2f", s.name, s.id, s.gpa);
    return 0;
}