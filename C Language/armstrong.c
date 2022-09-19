#include <stdio.h>
int main()
{
    int n, sum, temp, rem;

    for (n = 100; n <= 999; n++)
    {

        temp = n;
        sum = 0;

        while (temp > 0)
        {
            rem = temp % 10;
            sum += rem * rem * rem;
            temp = temp / 10;
        }

        if (sum == n)
        {
            printf("%d ", sum);
        }
    }
}