#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "This is the FBI";
    printf("%s\n", str);

    int manual;

    for (int i = 0; str[i] != '\0'; i++) // Manual calcultion of string length
    {
        manual++;
    }

    int length = strlen(str);

    printf("Strlen = %d\nManual = %d\n", length, manual);

    printf("%lu\n", sizeof(str)); // size of str as an array (IT IS GREATER AS IT ASLO INCLUDES NULL CHARACTER AS AN ELEMENT)

    ////////////////////////////////////////

    // COPY STRINGS

    char new[] = "This is a string";

    printf("String before using strcpy - \"%s\"\n", str);

    strcpy(str, new);

    printf("String copy using strcpy - \"%s\"\n", str);


    printf("\n");

    // COPYING UPTO N CHARACTERS ONLY - Using strncopy

    printf("String before using strcpy - \"%s\"\n", new);
    
    strncpy(new,"Fuck You Python", 4);

    printf("String copy using strncpy - \"%s\"\n", new);


    printf("Enter new value for str : ");
    scanf("%s", str);
    printf("%s\n", str);

    return 0;
}