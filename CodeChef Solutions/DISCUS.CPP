#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, max = 0;

        for (int i = 0; i < 3; i++)
        {
            cin >> x;
           max= (x > max) ? x : max;
        }
        cout << max << endl;
    }
    return 0;
}
