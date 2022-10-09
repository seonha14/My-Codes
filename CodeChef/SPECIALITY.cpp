#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int max = 0;

        int a;
        int j = 1;
        int answer;
        for (int i = 0; i < 3; i++)
        {
            cin >> a;

            if (a > max)
            {
                max = a;
                answer = j;
                j++;
            }
        }

        switch (answer)
        {
        case 1:
            cout << "Setter" << endl;
            break;

        case 2:
            cout << "Tester" << endl;
            break;

        case 3:
            cout << "Editorialist" << endl;
            break;
        }
    }
    return 0;
}