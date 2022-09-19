#include <stdio.h>

int main()
{
    char str[] = {'e', 'f', 'g'};

    printf("%s\n", str);

    char strq[] = "hellp this is a supercode";
    strq[0] = 'H';
    strq[4] = 'o';

    printf("%s\n", strq);

    printf("%s\n", &strq[11]); // Printing starts from index 11

    printf("%.2s\n", &strq[11]); // Printing limited characters

    printf("\n\n");

    ////////////////////////////////////////////////////////////////////////

    // Array of strings
    char arr[][10] = {"hello", "motherf", "Noice"};

    int size = sizeof(arr)/sizeof(arr[1]);

for (int i = 0; i < size; i++)
{

    printf("%s\n", arr[i]);
}
    return 0;
}