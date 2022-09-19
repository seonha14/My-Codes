#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i = 1, fact = 1;

    scanf("%d", &n);

    while (i <= n)
    {
        fact *= i;
        i++;
    }

    printf("%d", fact);
    getch();
}