#include <iostream>
#include <compare>
using namespace std;

string convert(int num)
{
    string a = num + "";
    return a;
}

int main()
{
    int n;
    cout << "Enter an Integer" << endl;
    cin >> n;

    string ans = convert(n);
    cout << "The string is :  " + ans << endl;
}