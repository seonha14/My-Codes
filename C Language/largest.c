#include <stdio.h>
int main()
{
    int n, i = 1, largest= 0;

    while (i <= 6)
    {
        scanf("%d", &n);

        largest = (n > largest) ? n : largest;
        i++;
    }

    printf("Largest = %d", largest);
}