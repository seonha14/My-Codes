#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < array[i].length(); j++)
            {
                if (array[i][j] == '1' && array[i + 1][j] == '1')
                {
                    array[i + 1][j] = '0';
                }
                else if (array[i][j] == '1' || array[i + 1][j] == '1')
                {
                    array[i + 1][j] = '1';
                }
            }
            // cout << "array i+1 " << array[i + 1] << endl;
        }
        for (int i = 0; i < array[n - 1].length(); i++)
        {
            if (array[n - 1][i] == '1')
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
