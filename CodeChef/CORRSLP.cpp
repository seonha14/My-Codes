#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, x;
        cin >> n >> l >> x;

        if (l <= n / 2)
        {
            cout << l * x << endl;
        }
        else
        {
            l = n - l;
            cout << l * x << endl;
        }
    }
    return 0;
}