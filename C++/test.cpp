// Program to find A intersection B (Even if elements are repeating)  ~Azeem
#include <iostream>
using namespace std;

int DuplicateCheck(int array[], int size, int Key)
{
    int status = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == Key)
        {
            // Element found in array
            status = 1;
        }
    }

    return status;
}

int main()
{
    int n1, n2;
    cout << "Enter the number of elements in set A and B:" << endl;
    cin >> n1 >> n2;

    int Set1[n1], Set2[n2];
    int Result[n1 + n2] = {0}; // Array for storing result

    cout << "Enter the elements of Set A:" << endl;
    for (int i = 0; i < n1; i++)
    {
        cin >> Set1[i];
    }

    cout << "Enter the elements of Set B:" << endl;
    for (int i = 0; i < n2; i++)
    {
        cin >> Set2[i];
    }

    int n = 0;
    cout << "Set A intersection B is :" << endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (Set1[i] == Set2[j])
            {
                if (DuplicateCheck(Result, n1 + n2, Set1[i]) == 0)
                {
                    Result[n] = Set1[i];
                    n++;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << Result[i] << " ";
    }

    cout << endl;
    return 0;

}