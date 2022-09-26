#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        int flag = 0;

        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                flag++;
            }
        }

        if (flag == 2)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}