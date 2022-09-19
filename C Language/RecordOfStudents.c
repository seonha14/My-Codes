#include <string.h>
#include <stdio.h>

struct student
{
    char name[10];
    int roll;
    float marks;
};

int main()
{
    struct student cse[2];

    for (int i = 0; i < 2; i++)
    {
        scanf("%s\t%d\t%f\t", cse[i].name, &cse[i].roll, &cse[i].marks);
    }

    for (int i = 0; i < 2; i++)
    {
        printf("%s\t%d\t%f\t", cse[i].name, cse[i].roll, cse[i].marks);
    }
}
//Mohd Azeem