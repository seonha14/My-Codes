#include <stdio.h>
int main()
{
    int n, i = 1, x;
    scanf("%d", &n);

    while (i <= 10)
    {
        x = n * i;
        printf("\n %d * %d = %d", n, i, x);
        i++;
    }
}