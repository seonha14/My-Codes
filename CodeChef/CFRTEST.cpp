// Used Hashing
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int array[101] = {0};
        cin >> n;

        int index;

        for (int i = 0; i < n; i++)
        {
            cin >> index;
            array[index]++;
        }

        int count = 0;

        for (int i = 0; i < 101; i++)
        {
            if (array[i] != 0)
            {
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}