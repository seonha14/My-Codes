#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int hash[110] = {0};

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            hash[a[i]]++;
        }
        bool flag = true;
        for (int i = 0; i < 110; i++)
        {
            if (hash[i] != 0)
                if (hash[i] % 2 != 0)
                    flag = false;
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
