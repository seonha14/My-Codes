#include <stdio.h>

int fun(int n);

int main()
{
    int x = 5;
    printf("%d", fun(x));
    return 0;
}

int fun(int n)
{
    static int x;
   
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }

    return 0;
}