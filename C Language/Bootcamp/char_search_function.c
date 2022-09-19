#include <string.h>
#include <stdio.h>

// Refer character_search.c file in this folder for the concepts behind this program. // By Byte Garage Tutor

int char_search(char string[], char item, int postion[])
{
    char *pointer = &string[0];

    int index = 0;

    do
    {
        pointer = strchr(pointer, item);

        if (pointer)
        {
            postion[index] = pointer - string;
            index++;
            pointer++;
        }

    } while (pointer);

    return index;
}

void printoccurances(char str[], int position[], int index)
{

    char pattern[strlen(str)];

    memset(pattern, ' ', sizeof(pattern));

    for (int i = 0; i < index; i++)
    {

        pattern[position[i]] = '^';
    }

    printf("%s", str);
    printf("\n%s", pattern);
}

int main()
{
    char string[100];

    printf("\nEnter the string : \n");
    gets(string);

    char item;

    printf("\nEnter the item to search : \n");
    scanf(" %c", &item);

    int size = sizeof(string) / sizeof(string[0]);

    int postion[size];

    int index = char_search(string, item, postion); // the array 'position' will be modified as it is going to pointer

    printoccurances(string, postion, index);

    return 0;
}