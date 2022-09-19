#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int count =1;

    for (int i = 1; i <= n + (n - 1); i++)
    {
        for (int j = 1; j <= n + (n - 1); j++)
        {
            if ((i == 1) || (j == 1) || (i == n + (n - 1) || (j == n + (n - 1))))
            {
                printf("%d ", n);
            }
            else if ((i == count) || (j == count) || (i == n + (n - count) || (j == n + (n - count))))
            {
                 printf("%d ", n+1 - count);
                 
                // if (n + 1 - i <= 0)
                // {
                //     printf("%d ", n - j);
                // }
                // else
                // {
                //     printf("%d ", n + 1 - i);
                // }
            }
        }

        count+=i;
       

        printf("\n");
    }

    return 0;
}

// By Mohd Azeem