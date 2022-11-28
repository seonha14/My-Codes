#include <iostream>
#include <string>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;

        int initial_len = a.length();

        string compressed = "";
        int temp = 1;

        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == a[i + 1])
                temp++;
            else
            {
                compressed = compressed + a[i] + to_string(temp);
                temp = 1;
            }
        }

        if (compressed.length() < initial_len)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
