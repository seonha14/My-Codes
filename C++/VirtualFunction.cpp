#include <iostream>
using namespace std;

class Base
{
public:
    virtual void display() // If virtual is not written then Base Class Pointer will call this function but now it'll call Child fn.
    {
        cout << endl
             << "Base" << endl;
    }
};

class Child : public Base
{
public:
    void display()
    {
        cout << endl
             << "Child" << endl;
    }
};

int main()
{
    Child obj;

    Base *ptr = &obj;
    ptr->display();
}