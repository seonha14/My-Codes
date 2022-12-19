#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, k;
    cin >> n >> k;

    int a[n];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    k = a[k - 1];
    for (int i = 0; i < n; i++)
    {

        if ((a[i] >= k) && (a[i] != 0))
            count++;
    }

    cout << count << endl;
}