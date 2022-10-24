#include <iostream>
using namespace std;

class Array
{
private:
    int *A;
    int length;
    int size;

public:
    // All functions with int return type are modified to work like void
    Array(int size, int length);
    void SetLength(int l);
    void Display();
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
};
int main()
{
    cout << "\n\n\n\n                  Menu Driven Array Program                  ~By @AzeemIdrisi\n\n"
         << endl;

    int size, length;
    cout << "Enter the size of the Array:" << endl;
    cin >> size;
    cout << "Enter the length of Array:" << endl;
    cin >> length;
    Array a1(size, length); // Object creation

    cout << "Enter the elements:" << endl;
    for (int i = 0, n; i < length; i++)
    {
        cin >> n;
        a1.Set(i, n);
    }

    int selection;
    int index, value, element, key;

    do
    {

        cout << "\nOptions:" << endl;
        cout << "01. Display" << endl;
        cout << "02. Print Length" << endl;
        cout << "03. Print Size" << endl;
        cout << "04. Get value" << endl;
        cout << "05. Set value" << endl;
        cout << "06. Add an element" << endl;
        cout << "07. Insert an element" << endl;
        cout << "08. Delete an element" << endl;
        cout << "09. Find Maximum element" << endl;
        cout << "10. Find Minimum element" << endl;
        cout << "11. Find Sum of array" << endl;
        cout << "12. Search for an element (Linear)" << endl;
        cout << "13. Search for an element (Binary)  " << endl;
        cout << "14. Check if array is Sorted " << endl;
        cout << "15. Insert Sorted " << endl;
        cout << "16. Reverse Array " << endl;
        cout << "0.  Exit" << endl;

        cin >> selection;
        cout << endl;
        system("cls");
        switch (selection)
        {
        case 1:
            a1.Display();
            break;
        case 2:
            a1.printLength();
            break;
        case 3:
            a1.printSize();
            break;
        case 4:
            cout << "Enter index:" << endl;
            cin >> index;
            a1.Get(index);
            break;
        case 5:
            cout << "Enter index:" << endl;
            cin >> index;
            cout << "Enter value:" << endl;
            cin >> value;
            a1.Set(index, value);
            break;
        case 6:
            cout << "Enter element:" << endl;
            cin >> element;
            a1.Add(element);
            break;
        case 7:
            cout << "Enter index:" << endl;
            cin >> index;
            cout << "Enter element:" << endl;
            cin >> element;

            a1.Insert(index, element);
            break;
        case 8:
            cout << "Enter index:" << endl;
            cin >> index;
            a1.Delete(index);
            break;
        case 9:
            a1.Maximum();
            break;
        case 10:
            a1.Minimum();
            break;
        case 11:
            a1.Sum();
            break;
        case 12:
            cout << "Enter key:" << endl;
            cin >> key;
            a1.LinearSearch(key);
            break;
        case 13:
            cout << "Enter key:" << endl;
            cin >> key;
            a1.BinarySearch(key);
            break;
        case 14:
            a1.CheckSort();
            break;
        case 15:
            cout << "Enter element:" << endl;
            cin >> element;
            a1.InsertSort(element);
            break;
        case 16:
            a1.Reverse();
            break;

        default:
            break;
        }
    } while (selection != 0);

    return 0;
}
Array::Array(int s = 0, int l = 0)
{
    length = l;
    size = s;
    A = new int[size];
}

void Array::SetLength(int l)
{
    length = l;
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