#include <iostream>
using namespace std;
template <class T>
T sum(T a, T b)
{
    return a > b ? a : b;
}
int main()
{
    cout<< sum(5,9)<<endl;
    cout<< sum(5.8,9.1)<<endl;

    return 0;
}