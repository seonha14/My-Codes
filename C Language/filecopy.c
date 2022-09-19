#include <stdio.h>
int main()
{
    char a;
    FILE *fp1, *fp2;

    fp1 = fopen("ABC.txt", "r");
    fp2 = fopen("PQR.txt", "w");

    do
    {
        a = fgetc(fp1);
        fputc(a, fp2);

    } while (a != EOF);

    fcloseall;
}