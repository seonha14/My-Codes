#include <stdio.h>
#include <stdint.h> // For using uint64_t
int main()
{
    int variable = 25;
    int *p;
    p = &variable;

    printf("\nThe value of variable : %d", variable);
    printf("\nThe value of *p :%d", *p);
    printf("\nThe value of p :%llu", (uint64_t)p);

    int svariable = 26;
    p = &svariable;

    printf("\n\nThe value of svariable : %d", svariable);
    printf("\nThe value of *p :%d", *p);
    printf("\nThe value of p :%llu", (uint64_t)p);

    (*p)++; // Increase the value at same address. As *p refers to 'svariable' therefore both gets changed at same loacation.
    printf("\n\nThe value of svariable : %d", svariable);
    printf("\nThe value of *p :%d", *p);
    printf("\nThe value of p :%llu", (uint64_t)p);

    return 0;
}