#include <iostream>
using namespace std;

struct Array
{
    int *ptr;
    int size;
    int length;
};

void Display(struct Array array)
{
    cout << "Elements of the array are :" << endl;
    for (int i = 0; i < array.length; i++)
    {
        cout << array.ptr[i] << endl;
    }
}
int main()
{
    Array arr;
    cout << "Enter the size of the array:" << endl;
    cin >> arr.size;

    arr.ptr = new int[arr.size];
    arr.length = 0;

    int n;
    cout << "Enter the number of elements:" << endl;
    cin >> n;

    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr.ptr[i];
        arr.length++;
    }

    Display(arr);
    cout << "The length of the array is: " << arr.length << endl;

    delete[] arr.ptr;
}