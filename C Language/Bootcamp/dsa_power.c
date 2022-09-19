#include <stdio.h>

int loopfn(int m, int n)
{
    int product = 1;

    for (int i = 0; i < n; i++)
    {
        product = product * m;
    }

    return product;
}

int recursive(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return m * recursive(m, n - 1);
    }
}

int advanced(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        return advanced(m * m, n / 2);
    }
    else

    {
        return advanced(m * m, (n - 1) / 2) * m;
    }
}
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);

    printf("\n%d\n", loopfn(m, n));

    printf("\n%d\n", recursive(m, n));

    printf("\n%d\n", advanced(m, n));

    return 0;
}