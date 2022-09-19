#include <stdio.h>

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sum(n - 1) + n;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int Sum = sum(n);
    printf("%d", Sum);

    return 0;
}