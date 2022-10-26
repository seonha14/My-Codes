#include <iostream>
using namespace std;

class Demo
{
public:
    int x = 10;
    int y = 20;
    void Display() const
    {
        // x++; After writing const, The members of the function become read only
        cout << "x = " << x << " y = " << y << endl;
    }
};

int main()
{
    // Usage 1
    const int a = 20; // a++ is invalid & a=10 is invalid

    // Usage 2
    int const x = 12; // Also possible

    // Usage 3
    // Normal Way
    int b = 20;
    int *ptr = &b;

    cout << *ptr << endl;
    cout << ++*ptr << endl;

    // Now using const
    const int c = 20;
    // int *p = &c; //This is not allowed

    const int *p = &c; // Allowed when pointer is also a constant

    *p++;
    cout << *p << endl;

    // int *const t = &a; not allowed
    int z = 4;
    int *const t = &z;
    // *t++; Not allowed

    // And there are many other combination of constant

    // Moving to class

    Demo d;
    d.Display();
}