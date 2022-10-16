#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Default Non-Parameterised Constructor of BASE" << endl;
    }
    Base(int x)
    {
        cout << "Parameterised Constructor of BASE " << x << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {

        cout << "Default Non-Parameterised Constructor of DERIVED" << endl;
    }
    Derived(int a)
    {
        cout << "Parameterised Constructor of DERIVED " << a << endl;
    }

    // The new constructor for calling param constructor of Base as well
    Derived(int b, int a) : Base(b) // Pass b parameter to constructor of base.
    {
        cout << "Parameterised Constructor of DERIVED " << a << endl;
    }
};

int main()
{
    Derived d;
    cout << endl;

    Derived t(5);
    cout << endl;

    // Now if we want to call Param constructor of both the class when we pass an argument then we have to write
    // a new constructor and call it.

    Derived n(5, 19); // 5 for base class and 19 for derived
}