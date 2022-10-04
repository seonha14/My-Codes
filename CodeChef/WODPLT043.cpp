#include <iostream>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;

        cin >> n;
        long long int i = 1;

        while ((i != n))
        {
            i++;
            n--;
        }

        cout << i << endl;
    }
    return 0;
}