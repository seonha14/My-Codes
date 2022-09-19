#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    int roll;
    float marks;
};



int main()
{
    struct student stu1 = {"ABC ", 25, 98.5};
    struct student stu2, stu3;

    strcpy(stu2.name, "XYZ ");
    stu2.roll = 26;
    stu2.marks = 68.5;

    scanf("%s%d%f", stu3.name, &stu3.roll, &stu3.marks);

    printf("%s\t%d\t%f\t", stu1.name, stu1.roll, stu1.marks);
    printf("%s\t%d\t%f\t", stu2.name, stu2.roll, stu2.marks);
    printf("%s\t%d\t%f\t", stu3.name, stu3.roll, stu3.marks);
}

// Mohd Azeem