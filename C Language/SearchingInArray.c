#include <stdio.h>
int main()
{
    // Declaration of Array

    int x[50], value, number;

    // Flag

    int flag = 0;

    // Filling values in Array

    for (int i = 1; i <= 50; i++)
    {
        x[i] = i;
    }

    // Taking input to search

    printf("Enter the value to search in the array: ");

    scanf("%d", &value);

    // Searching

    for (int i = 1; i <= 50; i++)
    {

        if (x[i] == value)
        {
            flag = 1;
            number = x[i];

            break;
        }
    }

    //Printing the Results

    if (flag == 1)
    {
        printf("\nThe number is %d and is at the position %d in the array.", number, value);
    }
    else
    {
        printf("\nNumber not found.");
    }
}

// By Mohd Azeem.  [NO HELP | AT ONCE]