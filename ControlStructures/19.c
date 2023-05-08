/*19. Write a C program that uses a switch statement to check the grade of a student based on
their score. Use the following grading scale: A (90-100), B (80-89), C (70-79), D (60-69), F (0-
59). Print a message to the console indicating the grade.*/
#include <stdio.h>

int main()
{
    int score;
    printf("By Prajjwal Thapaliya\n");
    printf("Enter the student's score: ");
    scanf("%d", &score);

    switch (score / 10)
    {
    case 10:
    case 9:
        printf("Grade: A\n");
        break;
    case 8:
        printf("Grade: B\n");
        break;
    case 7:
        printf("Grade: C\n");
        break;
    case 6:
        printf("Grade: D\n");
        break;
    default:
        printf("Grade: F\n");
        break;
    }

    return 0;
}
