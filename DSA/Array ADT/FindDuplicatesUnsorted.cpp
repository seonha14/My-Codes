#include <iostream>
using namespace std;
void FindDuplicate(int *a, int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int count = 1;
        if (a[i] != -1)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    count++;
                    a[j] = -1;
                }
            }
            if (count > 1)
            {
                cout << "\nElement " << a[i] << " : " << count << " times";
            }
        }
    }
}

void UsingHashing(int *a, int n)
{
    int x[10000] = {0};
    for (int i = 0; i < n; i++)
    {
        x[a[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (x[i] > 1)
        {
            cout << "\nElement " << i << " : " << x[i] << " times";
        }
    }
}
int main()
{ /*
     int n;
     cout << "\nEnter the size : ";
     cin >> n;
     int a[n];
     cout << "\nEnter the elements : ";
     for (int i = 0; i < n; i++)
     {
         cin >> a[i];
     }

     cout << "\nYour Array is : ";
     for (int i = 0; i < n; i++)
     {
         cout << a[i] << " ";
     }*/

    int a[10] = {1, 2, 1, 4, 5, 2, 7, 3, 9, 2};

    cout << "\nUsing Hashing\n";
    UsingHashing(a, 10);
    cout << "\nUsing For Loop\n";
    FindDuplicate(a, 10);
}