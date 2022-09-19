#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    // char *s;
    // s = malloc(1024 * sizeof(char));
    // scanf("%[^\n]", s);
    // s = realloc(s, strlen(s) + 1);
    char s[] = "a11472o5t6";

    char *ptr;
    int input;
    int frequency[9];
    int count = 0;

    for (input = 0; input <= 9; input++)
    {
        ptr = s;
        do
        {

            ptr = strchr(ptr, input + '0');

            if (ptr)
            {
                count++;
                ptr++;
            }
        } while (ptr);

        frequency[input] = count;
        count = 0;
    }

    for (int i = 0; i <= 9; i++)
    {
        printf("%d ", frequency[i]);
    }

    return 0;
}
