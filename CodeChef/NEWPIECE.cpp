#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, p, q;
        cin >> a >> b >> p >> q;

        int initial_colour, final_colour;

        if ((a + b) % 2 == 0)
        {
            initial_colour = 0;
        }
        else
        {
            initial_colour = 1;
        }
        if ((p + q) % 2 == 0)
        {
            final_colour = 0;
        }
        else
        {
            final_colour = 1;
        }
        if ((a == p) && (b == q))
        {
            cout << 0 << endl;
        }
        else if (initial_colour == final_colour)
        {
            cout << 2 << endl;
        }

        else if (initial_colour != final_colour)
        {
            cout << 1 << endl;
        }
    }
    return 0;
}