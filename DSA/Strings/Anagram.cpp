#include <iostream>
using namespace std;

int main()
{
    string a = "medical";
    string b = "decimal";

    int H[26] = {0}; // Hashtable for lowercase letters

    for (size_t i = 0; a[i] != '\0'; i++)
    {
        H[a[i] - 97]++;
    }
    int i;
    for (i = 0; b[i] != '\0'; i++)
    {
        H[b[i] - 97]--;
        if (H[b[i] - 97] < 0)
        {
            cout << "\nNot Anagram string" << endl;
            break;
        }
    }
    if (b[i] == '\0')
        cout << "\nIt's an Anagram string" << endl;
}