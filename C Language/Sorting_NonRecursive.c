// PRACTICAL 1 - Sorting Algorithms-Non-Recursive.
// Mohd Azeem | CSE 2B | 2100300100112

#include <stdio.h>
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
void insertionSort(int array[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > temp)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = temp;
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int array[], int n)
{
    int i, j, minimum;
    for (i = 0; i < n - 1; i++)
    {
        minimum = i;
        for (j = i + 1; j < n; j++)
            if (array[j] < array[minimum])
                minimum = j;

        if (minimum != i)
            swap(&array[minimum], &array[i]);
    }
}

void display(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void main()
{

    int a[10] = {34, 2, 687, 1, 32, 12, 22, 9, 45, 67};
    bubbleSort(a, 10);
    display(a, 10);

    int b[10] = {32, 12, 22, 9, 45, 67, 34, 2, 687, 1};
    insertionSort(b, 10);
    display(b, 10);

    int c[10] = {45, 32, 12, 22, 34, 2, 687, 1, 9, 67};
    insertionSort(c, 10);
    display(c, 10);
}

/*
Output:
1 2 9 12 22 32 34 45 67 687
1 2 9 12 22 32 34 45 67 687
1 2 9 12 22 32 34 45 67 687
*/