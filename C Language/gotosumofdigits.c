#include <stdio.h>
int main()
{
    int n,sum, rem;
    scanf("%d", &n);

  reduction:

    sum = 0;

    while (n > 0)
    {
        rem = n % 10;
        sum += rem;
        n = n / 10;
    }

    if (sum > 9)
    {
        n = sum;
        goto reduction;
    }

    printf("%d", sum);
}