#include <iostream>
using namespace std;

struct Array
{
    int array[20];
    int length;
    int size;
};

Array *Merge(Array a1, Array a2) //Return type is pointer to new array structure
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
        else
        {
            a3->array[k] = a2.array[j];
            k++;
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

    a3->length = a1.length + a2.length;
    a3->size = 20;
    return a3;
}

int main()
{
    Array a1 = {{1, 3, 5, 34, 52}, 5, 20};
    Array a2 = {{2, 22, 33, 42, 59}, 5, 20};
    Array *result; // Used for pointing at returned array by the merge functions
    result = Merge(a1, a2);

    cout << endl;
    for (int i = 0; i < result->length; i++)
    {
        cout << result->array[i] << " ";
    }
    cout << endl;
    cout << "result->size : " << result->size << endl;
    cout << "result->length : " << result->length << endl;

    return 0;
}