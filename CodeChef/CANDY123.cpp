#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int limak = a;
        int bob = b;

        for (int i = 1; i < 2 * (a + b); i++)
        {
            if (i % 2 != 0)
            {
                limak = limak - i;
                if (limak < 0)
                {
                    break;
                }
            }
            else
            {
                bob = bob - i;
                if (bob < 0)
                {
                    break;
                }
            }
        }

        if (bob < 0)
        {
            cout << "Limak" << endl;
        }
        else if (limak < 0)
        {

            cout << "Bob" << endl;
        }
    }
    return 0;
}