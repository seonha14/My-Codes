// incomplete
#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int flag = 0;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }

        for (int i = 0; i < n; i++)
        {
            int diff = abs(arr[i + 1] - arr[i]);
            int k = 2;
            while (diff < 2 && k <= n)
            {
                swap(arr[i + 1], arr[i + k]);
                k++;
                diff = abs(arr[i + 1] - arr[i]);
            }
            if (diff < 2)
            {
                flag = -1;
                break;
            }
            else
            {
                cout << arr[i] << endl;
            }
        }
        if (flag == -1)
        {
            cout << flag << endl;
        }
    }
    return 0;
}
