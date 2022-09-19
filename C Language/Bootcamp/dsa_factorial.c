#include <stdio.h>

int fact_Loop(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}
int fact_recursion(int n)
{
    if (n == 0)
        return 1;

    else
        return n * fact_recursion(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    int fact = fact_Loop(n);
    printf("\n%d\n", fact);

    fact = fact_recursion(n);
    printf("\n%d\n", fact);

    return 0;
}