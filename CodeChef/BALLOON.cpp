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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count = 0;
        int rem = 7;
        for (int i = 0; rem > 0; i++)
        {
            if (a[i] == 1)
            {
                count++;
                rem--;
            }
            else if (a[i] == 2)
            {
                count++;
                rem--;
            }
            else if (a[i] == 3)
            {
                count++;
                rem--;
            }
            else if (a[i] == 4)
            {
                count++;
                rem--;
            }
            else if (a[i] == 5)
            {
                count++;
                rem--;
            }
            else if (a[i] == 6)
            {
                count++;
                rem--;
            }
            else if (a[i] == 7)
            {
                count++;
                rem--;
            }
            else
            {
                count++;
            }
        }

        cout << count << endl;
    }
}
