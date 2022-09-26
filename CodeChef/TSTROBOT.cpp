#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        string s;
        cin >> s;

        int array[n] = {0};

        array[0] = x;
        int index = 1;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                x--;
                array[index] = x;
                index++;
            }
            else if (s[i] == 'R')
            {
                x++;
                array[index] = x;
                index++;
            }
        }

        sort(array, array + index);
        int answer = 0;
        for (int i = 0; i < index; i++)
        {
            if (array[i] == array[i + 1])
            {
                continue;
            }
            else
            {
                answer++;
            }
        }

        cout << answer << endl;
    }
    return 0;
}