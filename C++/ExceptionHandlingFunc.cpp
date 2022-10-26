#include <iostream>
using namespace std;

int divide(int x, int y)
{
    if (y == 0)
        throw 1;

    else
        return x / y;
}
int main()
{

    int x;
    int y;
    cout << "Enter x and y : ";
    cin >> x >> y;
    try
    {

        int z = divide(x, y);
        cout << "The value is : " << z << endl;
    }
    catch (int error)
    {
        cout << "Error " << error << endl;
    }
}