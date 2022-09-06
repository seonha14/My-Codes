#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, breadth;

public:

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

    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    Rectangle r;

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
    return 0;
}