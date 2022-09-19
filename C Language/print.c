#include <stdio.h>

int main()
{
    int a = 3300;

    int *p;
    p = &a;

    printf("The value of a is %d\v", a);
    printf("The value of *p is %d\v", *p);
    printf("The value of p is %u\v", p);
    printf("The value of &a is %u\v", &a);

    printf("\n");
}