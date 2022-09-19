#include <stdio.h>
int Array[20];

int memoization(int n)
{

    if (n <= 1)
    {
        Array[n] = n;
        return n;
    }
    else
    {
        if (Array[n - 1] == -1)
        {
            Array[n - 1] = memoization(n - 1);
        }
        if (Array[n - 2] == -1)
        {
            Array[n - 2] = memoization(n - 2);
        }

        return Array[n - 2] + Array[n - 1];
    }
}
int recursive_fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    else
    {
        return recursive_fib(n - 2) + recursive_fib(n - 1);
    }
}
int main()
{
    int n;
    // scanf("%d", &n);

    for (int i = 0; i < 20; i++)
    {
        Array[i] = -1;
    }

    n=7;
    printf("\n%d\n", recursive_fib(n));
    printf("\n%d\n", memoization(n));

    return 0;
}