#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, breadth;

public:
    void setLength(int l)
    {
        if (l > 0)
        {
            length = l;
        }
        else
        {
            cout << "Length cannot be negative" << endl;
        }
    }

    void setBreadth(int b)
    {
        if (b > 0)
        {
            breadth = b;
        }
        else
        {
            cout << "Breadth cannot be negative" << endl;
        }
    }

    void getLength()
    {
        cout << length << endl;
    }
    void getBreadth()
    {
        cout << breadth << endl;
    }

    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }

    // Non-Parameterized or Default Constructor

    Rectangle() // Name must be same as class
    {
        length = 0;
        breadth = 0;
    }
    /*Note : The above default constructor can be removed
    by merging it into Parameterized Constructor using Default parameters as (int l=0 ,int b=0) */

    // Parameterized Constructor

    Rectangle(int l, int b)
    {
        setLength(l);
        setBreadth(b);
    }

    // Copy constructor

    Rectangle(Rectangle &object)
    {
        length = object.length;
        breadth = object.breadth;
    }
};

int main()
{
    Rectangle r;         // calls default constructor
    Rectangle r2(16, 7); // calls parameterized
    Rectangle r3(r2);    // Calls copy

    cout << "Enter the length and breadth of the rectangle :" << endl;
    int l, b;
    cin >> l >> b;

    r.setLength(l);
    r.setBreadth(b);

    cout << "The length is : ";
    r.getLength();
    cout << "The breadth is : ";
    r.getBreadth();
    cout << "The area is : " << r.area() << endl;
    cout << "The perimeter is : " << r.perimeter() << endl;

    r.getBreadth();
    r.getLength();
    r2.getBreadth();
    r2.getLength();
    r3.getBreadth();
    r3.getLength();
    return 0;
}