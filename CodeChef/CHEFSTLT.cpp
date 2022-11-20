#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;

        int min = 0, max = 0;
        for (int i = 0; i < a.length(); i++)
        {
            if ((a[i] == '?') || (b[i] == '?'))
            {
                max++;
            }
            else if (a[i] != b[i])
            {
                min++;
            }
        }

        cout << min << " " << min + max << endl;
    }
    return 0;
}
