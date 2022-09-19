#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, T;
        cin >> S >> T;
        char M[5];

        for (int i = 0; i < 5; i++)
        {
            if (S[i] == T[i])
            {
                M[i] = 'G';
            }
            else
            {
                M[i] = 'B';
            }
        }

        cout << M << endl;
    }
    return 0;
}