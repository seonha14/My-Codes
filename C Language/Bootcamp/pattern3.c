#include <stdio.h>

int minimum(int a, int b, int c, int d) // To find minimun distance of each element from walls
{
    int min = -1;

    min = (a < b) ? a : b;
    min = (min < c) ? min : c;
    min = (min < d) ? min : d;

    return min;
}
int main()
{
    int n;
    scanf("%d", &n);
    int min;

    int max = 2 * n - 1;

    for (int row = 0; row < max; row++)
    {
        for (int col = 0; col < max; col++)
        {
            min = minimum(row, col, (max-1 - col), (max-1 - row));

            printf("%d ", n - min);
        }
        printf("\n");
    }
}