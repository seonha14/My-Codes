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

int Get(Array array, int index)
{
    if (index < array.length && index >= 0)
    {
        return array.A[index];
    }
    return -1;
}

void Set(Array *array, int index, int value)
{
    if (index < array->length && index >= 0)
    {
        array->A[index] = value;
    }
}

int Max(Array array)
{
    int maximum = array.A[0];

    for (int i = 0; i < array.length; i++)
    {
        if (array.A[i] > maximum)
        {
            maximum = array.A[i];
        }
    }
    return maximum;
}
int Min(Array array)
{
    int mini = array.A[0];

    for (int i = 0; i < array.length; i++)
    {
        if (array.A[i] < mini)
        {
            mini = array.A[i];
        }
    }
    return mini;
}

int Sum(Array array)
{
    int sum = 0;
    for (int i = 0; i < array.length; i++)
    {
        sum = sum + array.A[i];
    }

    return sum;
}

int main()
{
    // Initialization
    Array sample = {{1, 2, 3, 4, 5}, 10, 5}; // elements for initialization, size, length

    // Operations
    cout << "\n";

    Set(&sample, 3, 86);
    Display(sample);
    cout << "Get 3 : " << Get(sample, 3) << endl;
    cout << "The length of the array is: " << sample.length << endl;
    cout << "The Maximum element of the array is: " << Max(sample) << endl;
    cout << "The Minimum element of the array is: " << Min(sample) << endl;
    cout << "Sum of the array is: " << Sum(sample) << endl;
    cout << "\n";
    return 0;
}