#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;

        string result = a;
        if (a.length() > 10)
        {
            int len = a.length() - 2;
            result = a[0] + to_string(len) + a[a.length() - 1];
        }
        cout << result << endl;
    }
    return 0;
}
