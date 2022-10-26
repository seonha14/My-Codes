#include <iostream>
using namespace std;
int main()
{

    int x;
    int y;
    cout << "Enter x and y : ";
    cin >> x >> y;
    try
    {

        if (y == 0)
        {
            throw 69;
        }

        int z = x / y;
        cout << "The value is : " << z << endl;
    }
    catch (int error)
    {
        cout << "Error " << error << endl;
    }
}