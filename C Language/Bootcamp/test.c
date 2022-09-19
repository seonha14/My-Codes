#include <stdio.h>
#include <string.h>

int main()
{
    char number[10];
    scanf("%s", number);

    char arra[10];

    strcpy(arra,number);

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arra[i]);
    }
}