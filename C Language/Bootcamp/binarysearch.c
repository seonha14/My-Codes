#include <stdio.h>

int main()
{
    int array[5], first, last, mid, item;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }

    scanf("%d", &item);

    first = array[0];
    last = array[4];
    mid = (first + last) / 2;

    if (item == mid)
    {
        printf("Item found");
    }

    while (item != mid)
    {
        if (mid < item)
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }

        mid = (first + last) / 2;

        if (item == mid)
        {
            printf("Item found");
            break;
        }
    }

    // else
    // {
    //     printf("Item not found");
    // }
}