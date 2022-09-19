#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 3, 3, 2, 1, 2};

    int size_of_array = sizeof(a) / sizeof(a[0]);

    printf("\nThe size of the 'a' array is - %d \n\n", size_of_array);

    for (int i = 0; i < size_of_array; i++)
    {
        printf("%d ", a[i]);
    }

        printf("\n  ");
    //Pointer to an array

   
    int *ptr = a;  // Here ptr contains address *ptr is alias


  
    printf("\n*ptr to first element contains = %d\n ", *ptr);

    printf("\nptr[2] conatins =  %d \n", ptr[2]);

    ptr = ptr + 2;

    printf("\nptr + 2 =  %d \n", *ptr);


int *arr2;

for (int i = 0; i < 5; i++)
{
    arr2[i] = i;
}

        printf("\n  ");
        
for (int i = 0; i < 5; i++)
{
    printf("%d ", arr2[i]);
}



    return 0;
}