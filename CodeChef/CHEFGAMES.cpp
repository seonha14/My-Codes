#include <iostream>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int array[4];
        int flag = 0;
        for (int i = 0; i < 4; i++)
        {
            cin >> array[i];
        }
        for (int i = 0; i < 4; i++)
        {
            if (array[i] != 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            cout << "IN" << endl;
        }
        else
        {
            cout << "OUT" << endl;
        }
    }
    return 0;
}