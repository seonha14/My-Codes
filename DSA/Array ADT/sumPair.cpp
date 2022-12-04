// Using Hashing
#include <iostream>
using namespace std;

int findMax(int arr[], int n)
{
    int m = arr[0];
    for (size_t i = 0; i < n; i++)
    {
        m = arr[i] > m ? arr[i] : m;
    }
    return m;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int max = findMax(a, 10);
    int b[max + 1] = {0};

    int sum = 10;

    for (size_t i = 0; i < 10; i++)
    {
        if (b[sum - a[i]] != 0) // i.e 1 or greater for duplicates
            cout << a[i] << " + " << sum - a[i] << " = " << sum << endl;
        b[a[i]]++;
    }
}