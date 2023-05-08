/*48. Write a C program that defines a structure for a student with name, ID, and grade fields.
Create an array of 5 students and assign values to each element of the array. Print the values
of the elements to the console.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
struct student
{
    char name[50];
    int ID;
    float grade;
};
int main()
{

    printf("By Prajjwal Thapaliya\n");
    struct student stds[5];
    for (int i = 0; i < 5; i++)
    {
        printf("For student no %d\n", i + 1);
        printf("Enter name, id and grade::>");
        scanf("%s %d %f", stds[i].name, &stds[i].ID,&stds[i].grade);
    }
    printf("SN\tName\t\tID\tGrade\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t%s\t\t%d\t%f\n", i + 1, stds[i].name, stds[i].ID, stds[i].grade);
    }
}