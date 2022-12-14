#include <iostream>
using namespace std;

// Using char [] instead of string (temporarily)
void perm(char s[], int k)
{
    static int A[10] = {0};
    static char result[10];

    if (s[k] == '\0')
    {
        result[k] = '\0';
        cout << result << endl;
    }
    else
    {
        for (size_t i = 0; s[i] != '\0'; i++)
        {
            if (A[i] == 0)
            {
                result[k] = s[i];
                A[i] = 1;
                perm(s, k + 1);
                A[i] = 0;
            }
        }
    }
}
void permSwap(char s[], int low, int high)
{
    if (low == high)
        cout << s << endl;
    else
    {
        for (int i = low; i <= high; i++)
        {
            swap(s[low], s[i]);
            permSwap(s, low + 1, high);
            swap(s[i], s[low]);
        }
    }
}
int main()
{
    char str[] = "xyz";
    perm(str, 0);
    cout << "\n Next method" << endl;
    permSwap(str, 0, 2);
    return 0;
}