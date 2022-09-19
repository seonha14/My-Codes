#include <stdio.h>
#include <string.h>
#include <stdint.h>

int main()
{
    char string[] = "hello guys this is a sample string";

    char *returnpointer;

    int i = 0;

    int address[sizeof(string) / sizeof(string[1])];

    returnpointer = string;  // Pointer pointing to the base of whole string


    do
    {

        returnpointer = strchr(returnpointer, 's'); // strchr returns the whole string for the first occurance of the searching item
                                                    // strchr returns pointer in char form to the first occurance

        if (returnpointer)  //untill returnpointer is not NULL i.e. Till search result is true
        {
            address[i] = returnpointer - string;  //storing address of every occurace in an array (Position = Found Location - Starting location) 
            printf("\n%d\n", address[i]);
            i++;
            returnpointer++; // Changing pointer location by 1 so that it points to the next location after character is found
        }

    } while (returnpointer);  //untill returnpointer is not NULL i.e. search result is true

    
    return 0;
}