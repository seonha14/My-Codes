// PRACTICAL 3 - Searching Algorithm.
// Mohd Azeem | CSE 2B | 2100300100112

#include <stdio.h>
void binarySearch(int array[], int size, int key)
{
    int high = array[size] - 1;
    int low = 0;
    int flag = 0;
    if (low <= high)
    {
        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (key == array[mid])
            {
                flag = 1;
                break;
            }
            else if (key < array[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    if (flag == 1)
        printf("Element found\n");
    else
        printf("Not found\n");
}

void linearSearch(int array[], int size, int key)
{
    int i, flag = 0;
    for (i = 0; i < size; i++)
    {
        if (array[i] == key)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("Element found\n");
    else
        printf("Not found\n");
}
void main()
{
    int n = 10;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    binarySearch(a, n, 5);
    binarySearch(a, n, 20);

    linearSearch(a, n, 10);
    linearSearch(a, n, 80);
}

/*
Output:
Element found
Not found
Element found
Not found
*/