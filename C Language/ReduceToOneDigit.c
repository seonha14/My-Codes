#include <stdio.h>
int main()
{

    int n, sum;
    scanf("%d", &n);

Processing: //Label for goto statement

    sum = 0; // sum initialization so that it carry fresh value after every goto

    do
    {
        sum += n % 10;
        n = n / 10;

    } while (n > 0);

    if (sum > 9)
    {
        n = sum;
        goto Processing; // Sending to processing
    }

    printf("%d", sum);

    return 0;
}

// By Mohd Azeem.