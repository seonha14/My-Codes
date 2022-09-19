#include <stdio.h>

int sum(int a, int b);

int main()
{
    printf("\nEnter any two numbers :");
    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);

    printf("\nThe sum of the two digits is : %d\n", sum(x, y));
}

int sum(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}

// Azeem Idrisi