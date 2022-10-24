#include <iostream>
using namespace std;

class Car
{
public:
    virtual void start() = 0; // Purely virtual fn. (Equals to zero)
    virtual void stop() = 0;
};

// Purely virtual fn. are used to achieve Polymorphism
// We cannot create an object of this class, As it become abstract class
// These purely virual fn. make it compulsory for Derived classes to Override these functions. (Else the class will also become Abstract)

class BMW : public Car
{
public:
    void start()
    {
        cout << "BMW started" << endl;
    }
    void stop()
    {

        cout << "BMW stopped" << endl;
    }

    // If any of the above fn. is not written then class becomes abstract and Object creation will not be allowed.
};
class Mercedes_Benz : public Car
{
public:
    void start()
    {
        cout << "Mercedes_Benz started" << endl;
    }
    void stop()
    {

        cout << "Mercedes_Benz stopped" << endl;
    }

    // If any of the above fn. is not written then class becomes abstract and Object creation will not be allowed.
};

int main()
{
    Car *p;        // Pointer of base class
    p = new BMW(); // Obect of Derived class
    p->start();
    p->stop();

    p = new Mercedes_Benz();
    p->start();
    p->stop();

    // Same statement calls different fn. called as Polymorphism.
    // For polymorphism Base class is necessary for pointer of Base class and Fn. overriding.
}
