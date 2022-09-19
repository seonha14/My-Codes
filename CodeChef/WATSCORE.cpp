// Accepted in 1st submission
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int problem[11] = {0};
        int attempts;

        int index;
        int value;
        cin >> attempts;

        for (int i = 0; i < attempts; i++)
        {
            cin >> index;
            cin >> value;

            if (value > problem[index])
            {
                problem[index] = value;
            }
        }

        int sum = 0;

        for (int i = 1; i <= 8; i++)
        {
            sum = sum + problem[i];
        }

        cout << sum << endl;
    }
    return 0;
}