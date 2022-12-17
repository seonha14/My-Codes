#include <iostream>
using namespace std;

// In diagonal matrix elements are present where row=column only
int a[5]; // Storing using 1-D array and discarding zeroes

void Set(int a[], int row, int column, int element)
{
    if (row == column)
        a[row - 1] = element;
}

int Get(int a[], int row, int column)
{
    if (row == column)
        return a[row - 1];
    else
        return 0; // Because rest of all elements are zeroes
}

int main()
{
    cout << endl;
    for (size_t i = 1; i <= 5; i++)
    {
        for (size_t j = 1; j <= 5; j++)
        {
            Set(a, i, j, (i + j) * 5);
        }
    }

    for (size_t i = 1; i <= 5; i++)
    {
        for (size_t j = 1; j <= 5; j++)
        {
            cout << Get(a, i, j) << " ";
        }
        cout << endl;
    }
    cout << endl;
}