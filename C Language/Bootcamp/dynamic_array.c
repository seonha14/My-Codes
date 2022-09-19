#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n; // Size of Array.
    scanf("%d", &n);

    int *array = calloc(n, sizeof(int));

    *array = 1; // Base adress *array = array[0]

    array[1] = 2; // Normal Method

    *(array + 2) = 3; // Assign value where address is pointing.

    printf("%p\n", array);
    printf("%d\n", array[0]);

    printf("%p\n", array + 1);
    printf("%d\n", *(array + 1)); // Print value where (array + 1) address is pointing. i.e - 2

    printf("%p\n", array + 2);
    printf("%d\n", *(array + 2));

    free(array);
}