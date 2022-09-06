#include <iostream>
using namespace std;

struct Array
{
    int A[10]; // This time taking pre defined size for ease of understanding
    int size;
    int length;
};

void Display(struct Array array)
{
    cout << "Elements of the array are :" << endl;
    for (int i = 0; i < array.length; i++)
    {
        cout << array.A[i] << endl;
    }
}

int Delete(struct Array *array, int index) // delete element at given index and move other
{
    int x=0;
    if (index <= array->length && index >= 0)
    {
        x = array->A[index];

        for (int i = index; i < array->length-1; i++)
        {
            array->A[i] = array->A[i + 1];
        }
        array->length--;
    }
    return x;
}

int main()
{
    // Initialization
    Array sample = {{1, 2, 3, 4, 5}, 10, 5}; // elements for initialization, size, length

    // Operations
    cout<<"\n";
    cout << "Deleted element is : " << Delete(&sample, 1) << endl;

    Display(sample);
    cout << "The length of the array is: " << sample.length << endl;
    return 0;
}