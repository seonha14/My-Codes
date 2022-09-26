#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        if (n == 1)
        {
            cout << n << endl;
        }
        else
        {

            int count = 0;
            for (int i = 1; i < n; i++)
            {
                if (A[i] == A[i - 1])
                {
                    count++;
                }
            }

            cout << n - count << endl;
        }
    }
    return 0;
}