//Program for creating an array in heap memory using pointer
#include <iostream>
using namespace std;
int main()
{
    int *p;
    p = new int[5];
    p[1] = 5;
    cout << endl
         << p[1] << endl;
    delete[] p;
    return 0;
}
