#include <stdio.h>

struct Profile
{
    int age;
    char name[20];
    char course[20];
} student;

int main()
{

    printf("\nWelcome! Create your student profile to get started\n");

    printf("\nEnter your name : ");
    scanf(" %[^\n]%*c", student.name);

    printf("\nEnter your age :");
    scanf("%d", &student.age);

    printf("\nEnter your Course Name : ");
    scanf(" %[^\n]%*c", student.course);

    printf("\nName - %s \nAge - %d \nCourse - %s\n", student.name, student.age, student.course);

    return 0;
}