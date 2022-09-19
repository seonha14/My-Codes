#include <string.h>
#include <stdio.h>

int main()
{

    char str[] = "Hey this hi sij saample string";
    printf("%s\n",str);

    char search[] = "hi";

    char *pointer = strstr(str, search);
    int location = pointer - str;
    printf("\nThe \"%s\" is found at : %d\n",search,  location);

    return 0;
}