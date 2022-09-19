#include<string.h>
#include<stdio.h>

int main()
{

 char string[]= "This is the FBI";
 char second[]= "This is the FBI";

 int Result = strcmp(string, second);

printf("The string = %s\nand second = %s", string,second);
printf("\nResult of strcmp : %d\n", Result);


    return 0;
}