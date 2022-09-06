// Practice program by Azeem for classes using all things learned in Array ADT

#include <iostream>
using namespace std;

class Array
{
private:
    int A[20];
    int length;
    int size;

public:
    // All functions with int return type are modified to work like void
    Array();
    void Display();
    void SetLength(int l);
    void printLength();
    void printSize();
    void Get(int index);
    void Set(int index, int value);
    void Add(int x);
    void Insert(int index, int element);
    void Delete(int index);
    void Maximum();
    void Minimum();
    void Sum();
    void LinearSearch(int key);
    void BinarySearch(int key);
    void CheckSort();
    void InsertSort(int element);
    void Reverse();
    Array *Merge(Array a2);
    Array *UnionSorted(Array a2);
    Array *Intersection(Array a2);
    Array *Difference(Array a2);
};

int main()
{
    Array a1; // Object creation

    // Default array printing
    cout << endl
         << "Default array printing:";
    a1.printSize();
    a1.Display();
    a1.printLength();
    cout << endl;

    // Get
    cout << "Get(2):" << endl;
    a1.Get(2);
    cout << endl;

    // Set
    cout << "Set(1, 65):" << endl;
    a1.Set(1, 65);
    a1.Display();
    a1.printLength();
    cout << endl;

    // Add
    cout << "Add(32):" << endl;
    a1.Add(32);
    a1.Display();
    a1.printLength();
    cout << endl;

    // Insert
    cout << "Insert(3, 75):" << endl;
    a1.Insert(3, 75);
    a1.Display();
    a1.printLength();
    cout << endl;

    // Delete
    cout << "Delete(3):" << endl;
    a1.Delete(3);
    a1.Display();
    a1.printLength();
    cout << endl;

    // Maximum
    cout << "Maximum():" << endl;
    a1.Maximum();
    cout << endl;

    // Minimum
    cout << "Minimum():" << endl;
    a1.Minimum();
    cout << endl;

    // Sum
    cout << "Sum():" << endl;
    a1.Sum();
    cout << endl;

    // Linear Search
    cout << "LinearSearch(6):" << endl;
    a1.LinearSearch(6);
    cout << endl;

    // Binary Search
    cout << "BinarySearch(5):" << endl;
    a1.BinarySearch(5);
    cout << endl;

    // Check if Array is sorted
    cout << "CheckSort():" << endl;
    a1.CheckSort();
    cout << endl;

    // Insert element at sorted position
    cout << "InsertSort(12):" << endl;
    a1.InsertSort(12);
    a1.Display();
    a1.printLength();
    cout << endl;

    a1.Set(1, 2);

    // Reverse
    cout << "Reverse():" << endl;
    a1.Reverse();
    a1.Display();
    cout << endl;

    a1.Reverse();
    // Merge two arrays
    Array a2; // Second object creation

    cout << "a3 = a1.Merge(a2):" << endl;
    Array *a3;         // Third pointer object for receiveing
    a3 = a1.Merge(a2); // Merge a1 with a2
    a3->Display();
    a3->printLength();
    cout << endl;

    // Union  (Works only on Sorted arrays)
    cout << "a3 = a1.UnionSorted(a2):" << endl;
    a3 = a1.UnionSorted(a2);
    a3->Display();
    a3->printLength();
    cout << endl;

    // Intersection  (Works only on Sorted arrays)
    cout << "a3 = a1.Intersection(a2):" << endl;
    a3 = a1.Intersection(a2);
    a3->Display();
    a3->printLength();
    cout << endl;

    // Difference  (Works only on Sorted arrays)
    cout << "a3 = a1.Difference(a2):" << endl;
    a3 = a1.Difference(a2);
    a3->Display();
    a3->printLength();
    cout << endl;

    return 0;
}
Array::Array()
{
    length = 5;
    size = 20;
    for (int i = 0; i < length; i++)
    {
        A[i] = i + 1;
    }
}

void Array::printLength()
{
    cout << endl
         << "The length is : " << length << endl;
}

void Array::printSize()
{
    cout << endl
         << "The size is : " << size << endl;
}

void Array::Get(int index)
{
    if (index < length && index >= 0)
    {
        cout << "Element at index " << index << " is " << A[index] << endl;
    }
    else
        cout << "Element does not exist" << endl;
}

void Array::Set(int index, int value)
{
    if (index < length && index >= 0)
    {
        A[index] = value;
    }
}

void Array::Display()
{
    cout << "Elements of the array are :" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << A[i] << endl;
    }
}

void Array::SetLength(int l)
{
    length = l;
}

void Array::Add(int x) // Insert an element x in the first free space
{
    if (length < size)
    {
        A[length] = x;
        length++;
    }
    else
    {
        cout << endl
             << "There is not enough space to insert an element" << endl;
    }
}

void Array::Insert(int index, int element) // Move all elements to right and insert the element at given index
{
    if ((length < size) && (index >= 0) && (index <= length)) // Conditions before operation.
    {
        for (int i = length; i > index; i--)
        {
            A[i] = A[i - 1];
        }
        A[index] = element;
        length++;
    }
    else
    {
        cout << endl
             << "There is not enough space to insert an element" << endl;
    }
}

void Array::Delete(int index) // delete element at given index and move other
{
    int x = 0;
    if (index <= length && index >= 0)
    {
        x = A[index];

        for (int i = index; i < length - 1; i++)
        {
            A[i] = A[i + 1];
        }
        length--;
    }
    cout << "Deleted " << x << " from index " << index << endl
         << endl;
}

void Array::Maximum()
{
    int maximum = A[0];

    for (int i = 0; i < length; i++)
    {
        if (A[i] > maximum)
        {
            maximum = A[i];
        }
    }
    cout << "The maximum element of the array is " << maximum << endl;
}

void Array::Minimum()
{
    int minimum = A[0];

    for (int i = 0; i < length; i++)
    {
        if (A[i] < minimum)
        {
            minimum = A[i];
        }
    }
    cout << "The minimum element of the array is " << minimum << endl;
}

void Array::Sum()
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum = sum + A[i];
    }

    cout << "The sum of all elements of the array is " << sum << endl;
}

void Array::LinearSearch(int key)
{
    int index = -1;
    for (int i = 0; i < length; i++)
    {
        if (A[i] == key)
        {
            index = i;
            break;
        }
    }
    if (index != -1)
    {

        cout << "The element is present at index : " << index << endl;
    }
    else
    {
        cout << "The element not found" << endl;
    }
}

void Array::BinarySearch(int key)
{
    int high = length - 1;
    int low = 0;
    int index = -1;
    if (low <= high)
    {
        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (key == A[mid])
            {
                index = mid;
                break;
            }
            else if (key < A[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    if (index != -1)
    {
        cout << "The element is present at index : " << index << endl;
    }
    else
    {
        cout << "The element not found" << endl;
    }
}

void Array::CheckSort()
{
    int status = 0;
    for (int i = 0; i < length - 1; i++)
    {
        if (A[i] > A[i + 1])
        {
            status = 1;
        }
    }
    if (status == 1)
    {
        cout << "Array is Not Sorted" << endl;
    }
    else
    {
        cout << "Array is Sorted" << endl;
    }
}

void Array::InsertSort(int element)
{
    if (length < size)
    {
        int i;
        for (i = length - 1; i >= 0 && A[i] > element; i--)
        {
            A[i + 1] = A[i];
        }
        A[i + 1] = element;
        length++;
        cout << "The element " << element << " is inserted at index " << i + 1 << endl;
    }
    else
    {
        cout << endl
             << "There is not enough space to insert an element" << endl;
    }
}

void Array::Reverse()
{
    int temp;
    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }

    cout << "The array is reversed" << endl;
}

Array *Array::Merge(Array a2) // Return type is pointer to new array structure
{
    Array *tempArray = new Array[length + a2.length];
    int i, j, k;
    i = j = k = 0;
    while (i < length && j < a2.length)
    {
        if (A[i] < a2.A[j])
        {

            tempArray->A[k] = A[i];
            k++;
            i++;
        }
        else
        {
            tempArray->A[k] = a2.A[j];
            k++;
            j++;
        }
    }

    // If any one array finishes then for copying remaining elements we use for loops

    for (; i < length; i++) // i starts from whatever its current value is
    {
        tempArray->A[k] = A[i];
        k++;
    }
    for (; j < a2.length; j++) // j starts from whatever its current value is
    {
        tempArray->A[k] = a2.A[j];
        k++;
    }

    tempArray->length = length + a2.length;
    tempArray->size = 20;
    return tempArray;
}

Array *Array::UnionSorted(Array a2) // Return type is pointer to new array structure
{
    Array *a3 = new Array[length + a2.length];
    int i, j, k;
    i = j = k = 0;
    while (i < length && j < a2.length)
    {
        if (A[i] < a2.A[j])
        {
            a3->A[k] = A[i];
            k++;
            i++;
        }
        else if (A[i] > a2.A[j])
        {
            a3->A[k] = a2.A[j];
            k++;
            j++;
        }
        else // Both are equal
        {
            a3->A[k] = A[i];
            k++;
            i++;
            j++;
        }
    }

    // If any one array finishes then for copying remaining elements we use for loops

    for (; i < length; i++) // i starts from whatever its current value is
    {
        a3->A[k] = A[i];
        k++;
    }
    for (; j < a2.length; j++) // j starts from whatever its current value is
    {
        a3->A[k] = a2.A[j];
        k++;
    }

    a3->length = k;
    a3->size = 20;
    return a3;
}

Array *Array::Intersection(Array a2) // Return type is pointer to new array structure
{
    Array *a3 = new Array[length + a2.length];
    int i, j, k;
    i = j = k = 0;
    while (i < length && j < a2.length)
    {
        if (A[i] < a2.A[j])
        {

            i++;
        }
        else if (A[i] > a2.A[j])
        {

            j++;
        }
        else // Both are equal
        {
            a3->A[k] = A[i];
            k++;
            i++;
            j++;
        }
    }
    a3->length = k;
    a3->size = 20;
    return a3;
}

Array *Array::Difference(Array a2) // Return type is pointer to new array structure
{
    Array *a3 = new Array[length + a2.length];
    int i, j, k;
    i = j = k = 0;
    while (i < length && j < a2.length)
    {
        if (A[i] < a2.A[j])
        {
            a3->A[k] = A[i];
            k++;
            i++;
        }
        else if (A[i] > a2.A[j])
        {
            j++;
        }
        else // Both are equal
        {

            i++;
            j++;
        }
    }
    for (; i < length; i++) // i starts from whatever its current value is
    {
        a3->A[k] = A[i];
        k++;
    }
    a3->length = k;
    a3->size = 20;
    return a3;
}