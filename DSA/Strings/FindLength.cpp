#include <iostream>
using namespace std;
int main()
{
    char A[100] = "Hello World";
    cout << A << endl;
    int i;
    for (i = 0; A[i] != '\0'; i++)
        ;

    cout << i << endl;
}