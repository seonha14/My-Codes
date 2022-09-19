#include <string.h>
#include <stdio.h>

/// NOTE : STRTOK FN. MODIFIES OUR ORIGINAL STRING SO MAKE A BACKUP COPY

int main()
{
    char azzu[] = "My name is Mohammad Azeem Idrisi";

    char *piece = strtok(azzu, " ");
    while (piece)
    {
        printf("\n%s\n", piece);
        piece = strtok(NULL, " ");

        /* code */
    }

    return 0;
}