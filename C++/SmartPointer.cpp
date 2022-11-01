#include <iostream>
#include <memory>
using namespace std;

// Smart pointers automatically delete unused memory that cause memory leak
class Rectangle
{

    int length;
    int breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
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
    // Unique pointer: Can only point on one object
    unique_ptr<Rectangle> up1(new Rectangle(10, 5)); // Creates unique pointer p of type Rectangle
    cout << up1->area() << endl;

    // unique_ptr<Rectangle> up2 = up1; // Unique ptr cannot be transferred //Instead do the following
    unique_ptr<Rectangle> up2;
    up2 = move(up1); // uo1 will be deleted and up2 will be the new pointer
    // cout << up1->area() << endl; //No output
    cout << up2->area() << endl;

    // Shared Pointer
    shared_ptr<Rectangle> sp1(new Rectangle(10, 5)); // Creates shared pointer sp1 of type Rectangle
    cout << sp1->perimeter() << endl;

    shared_ptr<Rectangle> sp2;
    sp2 = sp1; // Allowed in shared (not in unique)

    cout << sp1->perimeter() << endl;
    cout << sp2->perimeter() << endl;

    // Shared pointer manages counter for number of pointers pointing on the object
    cout << "Counter : " << sp1.use_count() << endl;
}