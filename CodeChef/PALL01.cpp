#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, temp, rem, copy = 0;
        cin >> n;
        temp = n;
        while (temp > 0)
        {
            copy = copy * 10;
            rem = temp % 10;
            copy = copy + rem;
            temp = temp / 10;
        }

        if (copy == n)
        {
            cout << "wins" << endl;
        }
        else
        {
            cout << "loses" << endl;
        }
    }
    return 0;
}