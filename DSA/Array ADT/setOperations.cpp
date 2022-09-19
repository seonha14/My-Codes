#include <iostream>
using namespace std;

struct Array
{
    int array[10]; // This time taking pre defined size for ease of understanding
    int size;
    int length;
};

void Display(struct Array array)
{
    cout << "Elements of the array are :" << endl;
    for (int i = 0; i < array.length; i++)
    {
        cout << array.array[i] << endl;
    }
}

Array *UnionSorted(Array a1, Array a2) // Return type is pointer to new array structure
{
    Array *a3 = new Array[a1.length + a2.length];
    int i, j, k;
    i = j = k = 0;
    while (i < a1.length && j < a2.length)
    {
        if (a1.array[i] < a2.array[j])
        {
            a3->array[k] = a1.array[i];
            k++;
            i++;
        }
        else if (a1.array[i] > a2.array[j])
        {
            a3->array[k] = a2.array[j];
            k++;
            j++;
        }
        else // Both are equal
        {
            a3->array[k] = a1.array[i];
            k++;
            i++;
            j++;
        }
    }

    // If any one array finishes then for copying remaining elements we use for loops

    for (; i < a1.length; i++) // i starts from whatever its current value is
    {
        a3->array[k] = a1.array[i];
        k++;
    }
    for (; j < a2.length; j++) // j starts from whatever its current value is
    {
        a3->array[k] = a2.array[j];
        k++;
    }

    a3->length = k;
    a3->size = 20;
    return a3;
}

Array *Intersection(Array a1, Array a2) // Return type is pointer to new array structure
{
    Array *a3 = new Array[a1.length + a2.length];
    int i, j, k;
    i = j = k = 0;
    while (i < a1.length && j < a2.length)
    {
        if (a1.array[i] < a2.array[j])
        {
            i++;
        }
        else if (a1.array[i] > a2.array[j])
        {
            j++;
        }
        else // Both are equal
        {
            a3->array[k] = a1.array[i];
            k++;
            i++;
            j++;
        }
    }

    // There is no need to copy the remaining elements since we want only the common elements
    a3->length = k;
    a3->size = 20;
    return a3;
}

Array *Difference(Array a1, Array a2) // Return type is pointer to new array structure
{
    Array *a3 = new Array[a1.length + a2.length];
    int i, j, k;
    i = j = k = 0;
    while (i < a1.length && j < a2.length)
    {
        if (a1.array[i] < a2.array[j])
        {
            a3->array[k] = a1.array[i];
            k++;
            i++;
        }
        else if (a1.array[i] > a2.array[j])
        {
            j++;
        }
        else // Both are equal
        {
            i++;
            j++;
        }
    }

    // If any one array finishes then for copying remaining elements we use for loops

    for (; i < a1.length; i++) // i starts from whatever its current value is
    {
        a3->array[k] = a1.array[i];
        k++;
    }

    a3->length = k;
    a3->size = 20;
    return a3;
}

int main()
{
    Array set1 = {{1, 4, 6, 12, 32}, 10, 5};
    Array set2 = {{3, 7, 12, 14, 32, 67, 90}, 10, 7};

    Array *ptr;
    ptr = UnionSorted(set1, set2);
    Display(*ptr);

    ptr = Intersection(set1, set2);
    Display(*ptr);

    ptr = Difference(set2, set1);
    Display(*ptr);
    return 0;
}