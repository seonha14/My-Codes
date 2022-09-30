#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int tyre;
        cin >> tyre;

        if (tyre < 4)
        {
            cout << "YES" << endl;
        }
        else
        {

            if (tyre % 4 == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
}