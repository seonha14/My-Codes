#include <stdio.h>

int nCr(int n, int r)
{
    if (r == 0 || r == n)
    {
        return 1;
    }
    else
    {
        return nCr(n - 1, r - 1) + nCr(n - 1, r);
    }
}

int main()
{
    int n, r, combination;
    printf("\nEnter n and r\n");

    scanf("%d%d", &n, &r);

    combination = nCr(n, r);
    printf("%d\n", combination);
} 