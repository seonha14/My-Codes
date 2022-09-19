#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("file.txt", "r");

    int n;

    fscanf(fptr, "%d", &n); // For reading integer
    printf("\n%d\n", n);

    char s[100];

    fscanf(fptr, "%s", s); // Reading
    printf("%s\n", s);     // Printing

    
    //------------------------------------------------------------------------------------
    /*
        fptr = fopen("file.txt", "a");
        fprintf(fptr, "%s", " Added"); // Adding

        //------------------------------------------------------------------------------------*/

    fptr = fopen("file.txt", "r");

    char c;
    c = fgetc(fptr);
    while (c != EOF)
    {

        printf("%c", c);
        c = fgetc(fptr);
    }
    printf("\n");

    fclose(fptr);
    return 0;
}