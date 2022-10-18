#include <iostream>
using namespace std;

class Parent
{
public:
    void display()
    {
        cout << "Display of Parent" << endl;
    }
};
class Child : public Parent
{
public:
    void display() // Here display function is overrided to work as a function of Child class
    {
        cout << "Display of Child" << endl;
    }

    // If display() function is not written in Child class then Parent class display will be called.
};

int main()
{
    Parent a;
    Child b;
    a.display();
    b.display();
}