#include <iostream>
using namespace std;
int main()
{

    int *p = new int[5];  //Original Array

    for (int i = 0; i < 5; i++) //Filling
    {
        p[i] = i;
    }
    for (int i = 0; i < 5; i++) //Printing
    {
        cout << p[i] << endl;
    }

    int *q = new int[10]; //Create a new array in heap of new size using new pointer

    for (int i = 0; i < 5; i++) //Copy elements
    {
        q[i] = p[i];
    }
    delete[] p; // Free original pointer by deleting
    p = q; //Assign address of new array to original pointer
    q = NULL; //make second pointer point nowhere i.e. NULL

    cout << "New array:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << p[i] << endl;
    }
    return 0;
}  //By Abdul Bari Sir