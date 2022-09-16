#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(int r, int i); // Constructor
    void display();
    friend ostream &operator<<(ostream &o, Complex &C); // Overloaded display function
};
int main()
{
    Complex a(3, 9);

    // Output Method 1
    a.display();

    // Output Method 2 (By Overloading << to work with custom data type)
    cout << a;

    return 0;
}

Complex::Complex(int r = 0, int i = 0)
{
    real = r;
    imaginary = i;
}

void Complex::display()
{
    cout << real << "+" << imaginary << "i" << endl;
}

// Same display function with operator overloading (<< operator)
// Return type is 'ostream &' (ostream reference)
// Parameters are also reference type
// when << operator is used then 'cout' is passed as a paramater to function
// Therefore we use 'O' instead of 'cout' as both are same due to reference
ostream &operator<<(ostream &O, Complex &C)
{
    O << C.real << "+" << C.imaginary << "i" << endl;
    return O;
}