#include <stdio.h>
void main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }

    printf("Odd Numbers : %d \n", odd);
    printf("Even Numbers: %d \n", even);
}