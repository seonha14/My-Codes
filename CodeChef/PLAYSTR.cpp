// Accepted in first run.
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        string R, S;
        cin >> S >> R;

        int countS = 0, countR = 0;

        for (int i = 0; i < N; i++)
        {
            if (S[i] == '1')
            {
                countS++;
            }
            if (R[i] == '1')
            {
                countR++;
            }
        }

        if (countS == countR)
        {
            cout << "YES" << endl;
        }
        else
        {

            cout << "NO" << endl;
        }
    }
    return 0;
}