#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, count = 0;
        cin >> n >> k;
        long long int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] += k;

            if (a[i] % 7 == 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}