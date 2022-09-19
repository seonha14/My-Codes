// Using ASCII Codes
#include <iostream>
using namespace std;
int main()
{
    char A[] = "hello";

    cout << "Current string: " << A << endl;

    for (int i = 0; A[i] != '\0'; i++)
    {
        A[i] = A[i] - 32;
    }
    cout << "Uppercase: " << A << endl;

    for (int i = 0; A[i] != '\0'; i++)
    {
        A[i] = A[i] + 32;
    }
    cout << "Lowercase: " << A << endl;

    char B[] = "AzeeM";

    cout << "New string B:" << B << endl;
    cout << "Toggling" << endl;

    for (int i = 0; B[i] != '\0'; i++)
    {
        if (B[i] > 90)
        {
            B[i] -= 32;
        }
        else
        {
            B[i] += 32;
        }
    }
    cout << B << endl;
}