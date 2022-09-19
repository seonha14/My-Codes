#include <iostream>
using namespace std;

class Rectangle
{

private:
    int length, breadth;

public:
    // Constructors

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

    // Mutator Functions / Property
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

    // Accessor Functions / Property

    void getLength()
    {
        cout << length << endl;
    }
    void getBreadth()
    {
        cout << breadth << endl;
    }

    // Facilitator

    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }

    // Enquiry or Inspector

    bool isSquare();

    // Destructor

    ~Rectangle();
};