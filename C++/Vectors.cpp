// By Hackerrank and Apna College
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    for (auto x : v)
    {
        cout << x << " ";
    }

    v.pop_back();
    v.pop_back();
    cout << endl;
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << "Size is " << v.size() << endl;

    // Using Iterator
    vector<int>::iterator it;

    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Initialization
    int size = 3;
    int element = 50;
    vector<int> a(size, element); // Creates 50 50 50
    for (auto x : a)
    {
        cout << x << " ";
    }
}