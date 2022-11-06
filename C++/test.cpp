#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int a;
    cin >> a;
    int arr[a];
    int product = 1;
    int count = 0;
    int max = 0;
    for (int i = 0; i < a; i++)
    {
        /* code */
        cin >> arr[i];
        product *= arr[i];

        if (product != 0)
        {
            count++;
        }
        else
        {
            if (count > max)
            {
                max = count;
            }
            count = 0;
            product = 1;
        }
    }
    if (count > max)
    {
        max = count;
    }
    cout << max << endl;
    return 0;
}
