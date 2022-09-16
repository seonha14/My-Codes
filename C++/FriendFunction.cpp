#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(int r, int i);                            // Constructor
    friend Complex operator+(Complex C1, Complex C2); // Friend fn can only be defined outside the class and Without using scope resolution.
    void display();
};
int main()
{
    Complex a(3, 9);
    Complex b(5, 3);

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

void Complex::display()
{
    cout << real << "+" << imaginary << "i" << endl;
}

// Friend fn is written outside the class because it does not belongs
//  to any specific class but it is a friend so it can use class members.
Complex operator+(Complex C1, Complex C2)
{
    Complex t;
    t.real = C1.real + C2.real;
    t.imaginary = C1.imaginary + C2.imaginary;
    return t;
}