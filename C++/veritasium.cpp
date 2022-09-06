//Collatz Conjecture
#include <iostream>
using namespace std;

int main()
{
    long long int a, count = 0;
    cin >> a;
    cout << "The number is : " << a << endl;

    while (a > 1)
    {
        if (a % 2 != 0)
        {
            a = 3 * a + 1;
            
        }
        else
        {
            a /= 2;
        }
        count++;
        cout << a << endl;
    }

    cout << "Steps : " << count << endl;
    return 0;
}