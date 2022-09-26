#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float a, b, x, y;
        cin >> a >> x >> b >> y;

        if ((a / x) > (b / y))
        {
            cout << "Alice" << endl;
        }
        else if ((a / x) < (b / y))
        {
            cout << "Bob" << endl;
        }
        else if ((a / x) == (b / y))
        {
            cout << "Equal" << endl;
        }
    }
    return 0;
}