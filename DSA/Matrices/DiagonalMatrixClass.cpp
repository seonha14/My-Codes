#include <iostream>
using namespace std;

class Diagonal
{
private:
    int order;
    int *A;

public:
    Diagonal(int order);                      // Constructor
    void Set(int row, int column, int value); // Mutator
    int Get(int row, int column);
    void Display();
    friend ostream &operator<<(ostream &o, Diagonal &C); // Insertion operator overloading for displaying matrix
    ~Diagonal();
};

ostream &operator<<(ostream &o, Diagonal &C)
{
    for (size_t i = 1; i <= C.order; i++)
    {
        for (size_t j = 1; j <= C.order; j++)
        {
            o << C.Get(i, j) << " ";
        }
        o << endl;
    }
    return o;
}
Diagonal::Diagonal(int order)
{
    this->order = order;
    A = new int[order]; // Creates a new 1 D array of the desired size
}

void Diagonal::Set(int row, int column, int value)
{
    if (row == column)
        A[row - 1] = value;
}

int Diagonal::Get(int row, int column)
{
    if (row == column)
        return A[row - 1];
    else
        return 0;
}

void Diagonal::Display()
{
    cout << endl;
    for (size_t i = 1; i <= order; i++)
    {
        for (size_t j = 1; j <= order; j++)
        {
            cout << Get(i, j) << " ";
        }
        cout << endl;
    }
    cout << endl;
}

Diagonal::~Diagonal()
{
    delete[] A;
    cout << "Matrix Deleted !"
         << endl;
}
int main()
{
    int n = 5;
    Diagonal a(n);
    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = 1; j <= n; j++)
        {
            a.Set(i, j, 1);
        }
    }
    a.Display();
    cout << a; // Overloaded for displaying object of type diagonal;
    return 0;
}