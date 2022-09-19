#include <iostream>
using namespace std;

struct Array
{
    int A[10]; // This time taking pre defined size for ease of understanding
    int size;
    int length;
};

void Reverse(Array *array)
{
    int B[array->length];

    for (int i = 0, j = array->length - 1; i < array->length; i++, j--)
    {
        B[i] = array->A[j];
    }
    for (int i = 0; i < array->length; i++)
    {
        array->A[i] = B[i];
    }
}

void ReversePro(Array *array)
{
    int temp;
    for (int i = 0, j = array->length - 1; i < j; i++, j--)
    {
        temp = array->A[i];
        array->A[i] = array->A[j];
        array->A[j] = temp;
    }
}
void Display(struct Array array)
{
    cout << "Elements of the array are :" << endl;
    for (int i = 0; i < array.length; i++)
    {
        cout << array.A[i] << endl;
    }
}

int main()
{
    // Initialization
    Array sample = {{1, 2, 3, 4, 5}, 10, 5}; // elements for initialization, size, length

    // Operations
    cout << "\n";
    Reverse(&sample);
    Display(sample);
    ReversePro(&sample);
    Display(sample);
    cout << "The length of the array is: " << sample.length << endl;
    return 0;
}