#include <iostream>
using namespace std;

void OnlyPrint(int arr[], int size)
{
    int LastDuplicate = 0;
    cout << "Duplicate elements are : ";
    for (int i = 0; i < size - 1; i++)
    {
        if ((arr[i] == arr[i + 1]) && (arr[i] != LastDuplicate))
        {
            cout << arr[i] << " ";
            LastDuplicate = arr[i];
        }
    }
}

void CountPrint(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            int j = i + 1;
            while (arr[j] == arr[j + 1])
            {
                j++;
            }
            cout << "Element " << arr[i] << " : " << j - i + 1 << endl;
            i = j - 1;
        }
    }
}

int main()
{
    int a[] = {1, 2, 3, 3, 3, 4, 5, 6, 7, 7, 8};
    cout << "Only printing " << endl;
    OnlyPrint(a, 11);
    cout << "\n Counting" << endl;
    CountPrint(a, 11);
}