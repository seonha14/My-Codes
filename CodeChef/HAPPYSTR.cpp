#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;

        int l = a.length();

        int flag = 0;

        for (int i = 0; i < l - 3; i++)
        {
            if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
            {
                if (a[i + 1] == 'a' || a[i + 1] == 'e' || a[i + 1] == 'i' || a[i + 1] == 'o' || a[i + 1] == 'u')
                {
                    if (a[i + 2] == 'a' || a[i + 2] == 'e' || a[i + 2] == 'i' || a[i + 2] == 'o' || a[i + 2] == 'u')
                    {
                        flag = 1;
                        break;
                    }
                }
            }
        }

        if (flag == 0)
        {
            cout << "Sad" << endl;
        }
        else
        {
            cout << "Happy" << endl;
        }
    }
    return 0;
}