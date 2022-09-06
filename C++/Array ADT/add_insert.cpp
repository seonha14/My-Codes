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

void Add(struct Array *array, int x) // Insert an element x in the first free space
{
    if (array->length < array->size)
    {
        array->A[array->length] = x;
        array->length++;
    }
    else
    {
        cout << endl
             << "There is not enough space to insert an element" << endl;
    }
}

void Insert(struct Array *array, int index, int element) // Move all elements to right and insert the element at given index
{
    if ((array->length < array->size) && (index >= 0) && (index <= array->length)) // Conditions before operation.
    {
        for (int i = array->length; i > index; i--)
        {
            array->A[i] = array->A[i - 1];
        }
        array->A[index] = element;
        array->length++;
    }
}

int main()
{
    // Initialization
    Array sample = {{1, 2, 3, 4, 5}, 10, 5}; // elements for initialization, size, length

    // Operations
    Add(&sample, 23);

    Insert(&sample, 3, 56);

    Display(sample);
    cout << "The length of the array is: " << sample.length << endl;
    return 0;
}