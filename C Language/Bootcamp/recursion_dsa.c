#include <stdio.h>

void fun(int n);
void fun2(int n);

int main()
{
    int x = 3;
    fun(x); // Calling time printing

    printf("\n");

    fun2(x); // Return printing

    return 0;
}

void fun(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        fun(n - 1);
    }
}


void fun2(int n)
{
    if (n > 0)
    {
        fun2(n - 1);
        printf("%d ", n);
    }
}