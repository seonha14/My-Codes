#include <iostream>
using namespace std;

int part(int a[], int l, int h)
{
    int pivot = a[l];
    int i = l, j = h;

    while (i < j)
    {
        while (a[i] <= pivot)
            i++;
        while (a[j] > pivot)
            j--;
        if (i < j)
            swap(a[i], a[j]);
    }
    swap(a[l], a[j]);
    return j;
}

void quick(int a[], int l, int h)
{
    if (l < h)
    {
        int k = part(a, l, h);
        quick(a, l, k);
        quick(a, k + 1, h);
    }
}

int main()
{
    int a[10] = {45, 12, 2, 1, 78, 65, 33, 44, 14, 90};

    cout << "\nInitial array : ";
    for (int x : a)
        cout << x << " ";
    cout << endl;
    quick(a, 0, 9);
    cout << "\nSorted array : ";
    for (int x : a)
        cout << x << " ";
    cout << endl;
}