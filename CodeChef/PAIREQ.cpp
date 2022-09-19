#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        int array[size];
        for (int i = 0; i < size; i++)
        {
            cin >> array[i];
        }

        int max = 0;

        for (int i = 0; i < size; i++)
        {
            int count = 0;
            for (int j = i; j < size; j++)
            {
                if (array[i] == array[j])
                {
                    count++;
                }
                max = (count > max) ? count : max;
            }
        }

        cout << size - max << endl;
    }

    return 0;
}
