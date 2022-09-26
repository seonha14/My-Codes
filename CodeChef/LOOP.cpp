#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, total;
        cin >> a >> b >> total;

        if (a < b)
        {
            int direct = abs(a - b);
            int indirect = abs((total - b) + a);

            cout << ((direct < indirect) ? direct : indirect) << endl;
        }
        else
        {
            int direct = abs(a - b);
            int indirect = abs((total - a) + b);
            cout << ((direct < indirect) ? direct : indirect) << endl;
        }
    }
    return 0;
}