#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n;
        string a;
        cin >> n >> a;
        int length = n;
        int alice = 0;
        int bob = 1;

        string t;
        int k = 0;

        for (int i = 0; i < length; i++)
        {

            if (i == alice)
            {

                if (a[k] == '0')
                {

                    t = "0" + t;
                    alice += 2;
                    k++;
                }
                else if (a[k] == '1')
                {
                    t = t + "1";
                    alice += 2;
                    k++;
                }
            }
            else if (i == bob)
            {
                if (a[n - 1] == '0')
                {
                    t = t + "0";
                    n--;

                    bob += 2;
                }
                else if (a[n - 1] == '1')
                {
                    t = "1" + t;
                    bob += 2;
                    n--;
                }
            }
        }

        cout << t << endl;
    }
    return 0;
}