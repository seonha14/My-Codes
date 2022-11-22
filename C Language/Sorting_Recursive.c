// PRACTICAL 2 - Sorting Algorithms - Recursive.
// Mohd Azeem | CSE 2B | 2100300100112

#include <stdio.h>

void mergeSort(int[], int, int);
void merge(int[], int, int, int);
void main()
{
    int i;
    int a[10] = {34, 2, 687, 1, 32, 12, 22, 9, 45, 67};
    mergeSort(a, 0, 9);
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
}
void mergeSort(int array[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(array, low, mid);
        mergeSort(array, mid + 1, high);
        merge(array, low, mid, high);
    }
}

void merge(int a[], int low, int mid, int high)
{
    int b[100], i = low, j = mid + 1, k = low, l;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        b[k] = a[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        b[k] = a[j];
        j++;
        k++;
    }

    for (l = 0; l <= high; l++)
    {
        a[l] = b[l];
    }
}

/*
Output:
1 2 9 12 22 32 34 45 67 687
*/
