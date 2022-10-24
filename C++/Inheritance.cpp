#include <iostream>
using namespace std;

class Rectangle
{

private:
    int length, breadth;

public:
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &object);
    void setLength(int l);
    void setBreadth(int b);
    int getLength();
    int getBreadth();
    int area();
    int perimeter();
};

Rectangle::Rectangle()
{
    length = 0;
    breadth = 0;
}

Rectangle::Rectangle(int l, int b)
{
    setLength(l);
    setBreadth(b);
}

Rectangle::Rectangle(Rectangle &object)
{
    length = object.length;
    breadth = object.breadth;
}

void Rectangle::setLength(int l)
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

void Rectangle::setBreadth(int b)
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

int Rectangle::getLength()
{
    return length;
}
int Rectangle::getBreadth()
{
    return breadth;
}
int Rectangle::area()
{
    return length * breadth;
}
int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

// New class Cuboid having features of already existing class Rectangle
// This class can access all functions of parent class
// But cannot directly acces private members
// But have private members of parent class and can access using public functions of parent class like Acessors and Mutators.
class Cuboid : public Rectangle
{
private:
    int height;

public:
    Cuboid(int l, int b, int h);
    void setHeight(int h);
    int getHeight();
    int volume();
};

Cuboid::Cuboid(int l = 0, int b = 0, int h = 0)
{
    // height = h; This is also valid for height.
    setLength(l); // Using Mutator because it cannot directly access private members.
    setBreadth(b);
    setHeight(h);
}

void Cuboid::setHeight(int h)
{
    if (h > 0)
    {
        height = h;
    }
    else
    {
        cout << "Height cannot be negative" << endl;
    }
}

int Cuboid::getHeight()
{
    return height;
}

int Cuboid::volume()
{
    return getLength() * getBreadth() * getHeight();
}

int main()
{
    Cuboid x(2, 4, 4);
    cout << x.getLength() << endl;
    cout << x.getBreadth() << endl;
    cout << x.volume() << endl;

    return 0;
}