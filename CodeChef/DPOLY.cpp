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
        int array[n];
        int degree = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
            if (array[i] != 0 && i > degree)
            {
                degree = i;
            }
        }
        cout << degree << endl;
    }
    return 0;
}