#include <stdio.h>
int main()
{
    int n, new, rem, temp;
    scanf("%d", &n);

    temp = n;
    new = 0;

    while (temp > 0)
    {
        new = new * 10;
        rem = temp % 10;
        new += rem;
        temp = temp / 10;
    }

    if (new == n)
    {
        printf("%d is Palindrome", n);
    }
    return 0;
}