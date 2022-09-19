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

        long long int max;
        cin >> max;

        long long int A[size] = {0}, B[size] = {0};

        // for (int i = 0; i < size; i++)
        // {
        //     B[i] = 1;
        // }

        for (int i = 0; i < size; i++)
        {
            cin >> A[i];
        }

        for (int i = 0; i < size; i++)
        {
            B[i] = (abs(A[i] - max) > abs(A[i] - 1)) ? max : 1;
        }

        long long int sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += abs(A[i] - B[i]);
        }
        cout << sum << endl;
    }
    return 0;
}