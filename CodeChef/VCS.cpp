#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int ignore[m];
        int include[k];

        for (int i = 0; i < m; i++)
        {
            cin >> ignore[i];
        }

        for (int i = 0; i < k; i++)
        {
            cin >> include[i];
        }

        int natural[n + 1] = {0};

        for (int i = 0; i < m; i++)
        {
            natural[ignore[i]]++;
        }
        for (int i = 0; i < k; i++)
        {
            natural[include[i]]++;
        }

        int a = 0, b = 0;
        for (int i = 1; i < n + 1; i++)
        {
            if (natural[i] == 0)
            {
                b++;
            }
            else if (natural[i] == 2)
            {
                a++;
            }
        }

        cout << a << " " << b << endl;
    }
    return 0;
}