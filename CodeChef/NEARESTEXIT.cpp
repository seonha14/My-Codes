#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int seat;
        cin >> seat;
        if (seat <= 50)
        {
            cout << "LEFT" << endl;
        }
        else
        {
            cout << "RIGHT" << endl;
        }
    }
    return 0;
}