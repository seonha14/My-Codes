// Using hashing
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
        int A[100000] = {0};
        int x;

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            A[x]++;
        }

        for (int i = 0; i < 100000; i++)
        {
            if (A[i] % 2 != 0)
            {
                cout << i << endl;
            }
        }
    }
    return 0;
}
