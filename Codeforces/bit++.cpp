#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int x = 0;
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;

        for (size_t i = 0; i < a.length(); i++)
        {
            if ((a[i] == '+') && a[i + 1] == '+')
                x++;
            else if ((a[i] == '-') && a[i + 1] == '-')
                x--;
        }
    }
    cout << x << endl;
    return 0;
}
