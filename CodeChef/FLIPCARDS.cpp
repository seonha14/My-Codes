#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int total, up;
        cin >> total >> up;
        int down = total - up;

        int answer = (down < up) ? down : up;

        cout << answer << endl;
    }
    return 0;
}