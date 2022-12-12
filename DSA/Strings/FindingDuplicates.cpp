#include <iostream>
using namespace std;

void Hashtable(string a)
{
    int Hash[26] = {0}; // For lowercase letters only size is 26

    for (size_t i = 0; i < a.length(); i++)
    {
        Hash[a[i] - 97]++;
    }
    for (size_t i = 0; i < 26; i++)
    {
        if (Hash[i] > 1)
        {
            cout << (char)(i + 97) << " : " << Hash[i] << " times" << endl; // Typecasting for printing as character
        }
    }
}

// Using bitwisw operators

void bitwise(string a)
{
    long int h = 0, x = 0;

    for (size_t i = 0; i < a.length(); i++)
    {
        x = 1;
        x = x << (a[i] - 97); // Lefshift 1 bit in x by (a[i]-97) say 5 times 00000001 -> 00100000

        if ((x & h) > 0) // BITWISE AND
            cout << a[i] << " is duplicate" << endl;
        else
            h = x | h; // BITWISE OR
    }
}

int main()
{
    string a;
    cout << "\nEnter a string : ";
    cin >> a;

    Hashtable(a);

    bitwise(a);
    return 0;
}