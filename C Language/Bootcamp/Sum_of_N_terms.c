#include <stdio.h>

int sumfn(int n) //Recursive Function for sum of N terms --Abdul Bari
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sumfn(n - 1) + n;
    }
}


int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }

    printf("\nSum - %d\n", sum);

    sum = (n * (n + 1)) / 2;

    printf("Formula Sum - %d\n", sum);

    printf("Recursive Function Sum - %d\n\n", sumfn(n) );

    return 0;
}