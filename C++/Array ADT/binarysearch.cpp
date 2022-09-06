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

int BinarySearch(struct Array array, int key)
{
    int high = array.length - 1;
    int low = 0;
    if (low <= high)
    {
        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (key == array.A[mid])
            {
                return mid;
            }
            else if (key < array.A[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
    }

    return -1;
}

int RecursiveSearch(struct Array array, int key, int low, int high)
{
    int mid;
    if (low <= high)
    {
        mid = (low + high) / 2;

        if (key == array.A[mid])
        {
            return mid;
        }
        else if (key < mid)
        {
            return RecursiveSearch(array, key, low, mid - 1);
        }
        else
        {
            return RecursiveSearch(array, key, mid + 1, high);
        }
    }
    return -1;
}

int main()
{
    // Initialization
    Array sample = {{1, 2, 3, 4, 5}, 10, 5}; // elements for initialization, size, length

    // Operations
    Display(sample);
    cout << "The length of the array is: " << sample.length << endl;
    cout << "Enter the element to be searched : " << endl;
    int key;
    cin >> key;
    int index = BinarySearch(sample, key);

    if (index != -1)
    {
        cout << "Element " << key << " found at location " << index << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }
    index = RecursiveSearch(sample, key, 0, sample.length - 1);

    if (index != -1)
    {
        cout << "Element " << key << " found at location " << index << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }

    return 0;
}