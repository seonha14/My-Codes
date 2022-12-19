// In normal code Row Major was used, In this Column major is used.
#include <iostream>
using namespace std;

class Matrix
{
private:
    int *A;
    int n;

public:
    Matrix(int);
    void Set(int i, int j, int val);
    int Get(int i, int j);
    void Display();
};

Matrix::Matrix(int n)
{
    this->n = n;
    int size = n * (n + 1) / 2;
    A = new int[size];
}

void Matrix::Set(int i, int j, int val)
{
    if (i >= j)
    {
        /*
        formula for storing element is ( n(j-1)-(j-2)(j-1)/2+ i-j ) By Column Major Implementation
        */
        int location = n * (j - 1) - (j - 2) * (j - 1) / 2 + i - j;
        A[location] = val;
    }
}
int Matrix::Get(int i, int j)
{
    if (i >= j)
    {
        int location = n * (j - 1) - (j - 2) * (j - 1) / 2 + i - j;
        return A[location];
    }
    else
        return 0;
}

void Matrix::Display()
{
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%3d", Get(i, j));
        }
        cout << endl;
    }
    cout << endl;
}
int main()
{
    int n = 5;

    Matrix m(n);

    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = 1; j <= n; j++)
        {
            m.Set(i, j, i + j * 5);
        }
    }
    m.Display();

    return 0;
}