#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    if (t >= 1 && t <= 50)
    {
        cout << 100 << endl;
    }
    else if (t > 50 && t <= 100)
    {
        cout << 50 << endl;
    }
    else
    {

        cout << 0 << endl;
    }

    return 0;
}