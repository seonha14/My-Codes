#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int l;
        cin >> l;
        string snake;
        cin >> snake;

        int marker = 0;
        int flag = 0;

        for (int i = 0; i < snake.length(); i++)
        {
            /* code */
            if (snake[i] == '.')
            {
                continue;
            }
            else if (snake[i] == 'H')
            {
                marker++;
            }
            else if (snake[i] == 'T')
            {
                marker--;
            }

            if (marker > 1 || marker < 0)
            {
                flag = 1;
                break;
            }
        }
        if (marker != 0)
        {
            flag = 1;
        }
        if (flag == 1)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            cout << "Valid" << endl;
        }
    }
    return 0;
}