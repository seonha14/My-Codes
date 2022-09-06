//Used when constructor or function parameter name is same as variables of class

#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    Rectangle(int length, int breadth)
    {
        // length = length;
        this->length = length;

        // breadth = breadth
        this->breadth = breadth;
    }
};
int main()
{
    Rectangle r(20, 4);
    cout << endl
         << "Length is : " << r.length << endl;

    return 0;
}