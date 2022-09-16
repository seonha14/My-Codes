#include <iostream>
using namespace std;

void MultipleMissing(int arr[], int size, int lowest)
{
    int diff = lowest - 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] - i != diff)
        {
            while (diff < arr[i] - i)
            {
                cout << i + diff << endl;
                diff++;
            }
        }
    }
}
int MissingTest(int arr[], int size, int lowest)
{
    int diff = lowest - 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] - i != diff)
        {
            return i + diff;
        }
    }
    return 0;
}

int NaturalTest(int arr[], int size, int n) // Where N is the last element of the array
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    int s = (n * (n + 1)) / 2;

    return s - sum;
}
int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 9, 10}; // When array is Natural Numbers
    int size = sizeof(A) / sizeof(A[0]);
    int number = NaturalTest(A, size, 10);
    cout << "Missing number is: " << number << endl;
    number = MissingTest(A, size, A[0]);
    cout << "Missing number is: " << number << endl;
    cout << "Multiple Missing test for A: " << endl;
    MultipleMissing(A, size, A[0]);

    int B[] = {12, 13, 14, 16, 17, 18, 19, 20};
    size = sizeof(B) / sizeof(B[0]);

    number = MissingTest(B, size, B[0]);
    cout << "Missing number is: " << number << endl;
    cout << "Multiple Missing test for B: " << endl;

    MultipleMissing(B, size, B[0]);

    int c[] = {5, 6, 7, 9, 10, 11, 12, 15, 17};
    size = 9;
    cout << "Multiple Missing test for c: " << endl;
    MultipleMissing(c, size, c[0]);
}

/// To be continued from video