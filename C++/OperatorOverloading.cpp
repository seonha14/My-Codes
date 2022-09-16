#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(int r, int i);        // Constructor
    Complex add(Complex x);       // add function with same return type
    Complex operator+(Complex x); // same add function with + sign
    void display();
};
int main()
{
    Complex a(3, 9);
    Complex b(5, 3);
    Complex c = a.add(b);
    cout << "c : ";
    c.display();

    Complex D = a + b; // Adding complex like normal integers
    cout << "D : ";
    D.display();

    return 0;
}

Complex::Complex(int r = 0, int i = 0)
{
    real = r;
    imaginary = i;
}

Complex Complex::add(Complex x)
{
    Complex temp;
    temp.real = real + x.real;
    temp.imaginary = imaginary + x.imaginary;
    return temp;
}
Complex Complex::operator+(Complex x)
{
    Complex temp;
    temp.real = real + x.real;
    temp.imaginary = imaginary + x.imaginary;
    return temp;
}
void Complex::display()
{
    cout << real << "+" << imaginary << "i" << endl;
}