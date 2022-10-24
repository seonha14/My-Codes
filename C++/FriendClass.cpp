#include <iostream>
using namespace std;

// Friend class can access All members of another class

class FriendClassName; // Friend class must be declared before Base class so that it can become friend of Base

class Base
{
private:
    int a;

protected:
    int b;

public:
    int c;
    friend FriendClassName;
};

class FriendClassName
{
public:
    void function()
    {
        Base obj;
        obj.a = 5;
        obj.b = 3;
        obj.c = 8;
    }
};

// Even Derived class and their objects cannot access private members but objects of Friend Functions and Classes can access