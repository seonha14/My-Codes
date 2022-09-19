#include <iostream>
using namespace std;

int calc(int a, int b)
{
    if (a > 0 && b > 0)
    {
        return 1;
    }

    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int sum = x + y + z;

        int result = 0;
        if (calc(x, y))
        {
            x--;
            y--;
            result++;
        }
        if (calc(x, z))
        {
            x--;
            z--;
            result++;
        }
        if (calc(y, z))
        {
            y--;
            z--;
            result++;
        }
        if (x > 0)
        {
            result++;
        }
        if (y > 0)
        {
            result++;
        }
        if (z > 0)
        {
            result++;
        }

        if (result <= 2)
        {
            result = sum;
        }
        cout << result << endl;
    }
    return 0;
}