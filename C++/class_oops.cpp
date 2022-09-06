#include <iostream>
using namespace std;

class Rectangle
{
public:

    int length;
    int breadth;

    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return (length + breadth) * 2;
    }
};
int main()
{
    Rectangle one;
    cout << "Enter the length and breadth of the rectangle :" << endl;
    cin >> one.length >> one.breadth;
    cout << one.area() << endl
         << one.perimeter() << endl;
}