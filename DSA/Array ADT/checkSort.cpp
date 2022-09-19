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

void InsertSort(Array *array, int element)
{
    if (array->length < array->size)
    {
        int i;
        for (i = array->length - 1; i >= 0 && array->A[i] > element; i--)
        {
            array->A[i + 1] = array->A[i];
        }
        array->A[i + 1] = element;
        array->length++;
    }
}

bool CheckSort(Array array)
{
    for (int i = 0; i < array.length-1; i++)
    {
        if (array.A[i] > array.A[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    // Initialization
    Array sample = {{10, 22, 23, 64, 105}, 10, 5}; // elements for initialization, size, length

    // InsertSort(&sample, 5);

    Display(sample);
    cout << "The length of the array is: " << sample.length << endl;
    cout << "Sort Status : " << CheckSort(sample) << endl;
    return 0;
}