#include <stdio.h>

double taylor(int x, int n)
{
    static double power = 1, factorial = 1;
    double r;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        r = taylor(x, n - 1);
        power = power * x;
        factorial = factorial * n;
        return (r + power / factorial);
    }
}

double horner(int x, int n)
{
    static double result =1;

    if (n == 0)
    {
        return result;
    }
    else
    {
        result = 1 + (x * result)/n;
        return horner(x, n - 1);
    }
}

int main()
{
    printf("\n%lf\n", taylor(5, 100));
    printf("\n%lf\n", horner(5, 100));

    return 0;
}