#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        int chef[n], chefina[n];

        for (int i = 0; i < n; i++)
        {
            cin >> chef[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> chefina[i];
        }

        int streak = 0;
        int max_streak = 0;

        for (int i = 0; i < n; i++)
        {
            if ((chefina[i] != 0) && (chef[i] != 0))
            {
                streak++;
            }
            else
            {
                max_streak = streak > max_streak ? streak : max_streak;
                streak = 0;
            }
        }
        max_streak = streak > max_streak ? streak : max_streak;
        cout << max_streak << endl;
    }
    return 0;
}
