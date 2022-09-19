#include <iostream>
using namespace std;
int main()
{
    string a = "Hello my name is MOHD AZEEM    bye";

    int count = 0;

    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == ' ' && a[i - 1] != ' ')
        {
            count++;
        }
    }

    cout << count + 1 << endl; //+1 since words are 1 extra than spaces
}