#include <iostream>
using namespace std;

int partition(int A[], int l, int h)
{
    int pivot = A[l];
    int i = l, j = h;

    do
    {
        do
        {
            i++;
        } while (A[i] <= pivot);

        do
        {
            j--;
        } while (A[j] > pivot);

        if (i < j)
        {
            swap(A[i], A[j]);
        }
    } while (i < j);
    swap(A[l], A[j]);
    return j;
}

void QuickSort(int A[], int l, int h)
{
    if (l < h)
    {
        int j = partition(A, l, h);
        QuickSort(A, l, j);
        QuickSort(A, j + 1, h);
    }
}

void display(int A[], int n)
{
    cout << endl
         << "Array : ";
    for (size_t i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
int main()
{
    int array[11] = {9, 10, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    display(array, 11);
    QuickSort(array, 0, 11);
    display(array, 11);
    return 0;
}