#include <stdio.h>

int main()
{
    int n, f;
    printf("Enter the number : ");
    scanf("%d", &n);

    f = factorial(n);
    printf("%d", f);
}

factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return (1);
    }

    else
    {
        return (n * factorial(n - 1));
    }
}
//Mohd Azeem
