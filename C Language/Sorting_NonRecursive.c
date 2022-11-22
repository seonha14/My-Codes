// PRACTICAL 1 - Sorting Algorithms-Non-Recursive.
// Mohd Azeem | CSE 2B | 2100300100112

#include <stdio.h>

void bubbleSort(int[], int);
void mergeSort(int[], int);
void main()
{
    int i;
    int a[10] = {34, 2, 687, 1, 32, 12, 22, 9, 45, 67};
    bubbleSort(a, 10);
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
}
void bubbleSort(int array[], int size)
{
    int i, j, temp;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
void mergeSort(int array[], int size)
{
}

/*
Output:
1 2 9 12 22 32 34 45 67 687
*/