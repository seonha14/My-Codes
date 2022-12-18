#include <iostream>
using namespace std;

struct Matrix
{
    int *A;
    int n;
};

void Set(Matrix *a, int i, int j, int element)
{
    if (i >= j)
    {
        /*
        formula for storing element is ( i(i-1)/2 +j-1 ) By Row Major Implementation
        */
        int location = (i * (i - 1) / 2) + j - 1;
        a->A[location] = element;
    }
}

int Get(Matrix a, int i, int j)
{
    if (i >= j)
    {
        int location = (i * (i - 1) / 2) + j - 1;
        return a.A[location];
    }
    else
        return 0;
}

void Display(Matrix m)
{
    cout << endl;
    for (int i = 1; i <= m.n; i++)
    {
        for (int j = 1; j <= m.n; j++)
        {
            printf("%3d", Get(m, i, j));
        }
        cout << endl;
    }
    cout << endl;
}
int main()
{
    Matrix m;
    cout << "\nEnter the dimensions: ";
    cin >> m.n;

    /*
    Size of 1D array required to store Non Zero elements of a Lower Triangular Matrix is
    n(n+1)/2
    */
    int size = m.n * (m.n + 1) / 2;
    cout << "Size of 1D array is : " << size << endl;

    m.A = new int[size]; // creating a new 1D array of required size

    for (size_t i = 1; i <= m.n; i++)
    {
        for (size_t j = 1; j <= m.n; j++)
        {
            Set(&m, i, j, i + j * 5);
        }
    }
    Display(m);
    delete[] m.A;
    return 0;
}