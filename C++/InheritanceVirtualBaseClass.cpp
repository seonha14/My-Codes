#include <iostream>
using namespace std;

class A
{
    // some code
};

class B : virtual public A // Class Inheriting from A publicly
{
    // some code
};

// Virtual Keyword is used to make it Virtual Base Class
class C : virtual public A // Class Inheriting from A publicly
{
    // some code
};

// Now if a new class inherit from both B and C then it would have features of A via B as well as C
// which causes ambiguity, To prevent this, virtual keyword is used

class D : public B, public C // Multiple Inheritance
{
    // some code
};