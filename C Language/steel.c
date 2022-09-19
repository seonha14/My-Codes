#include <stdio.h>
int main()
{
    int hardness, tensile;
    float carbon;
    printf("enter the values of hardness, tensile strenght ,carbon");
    scanf("%d%d%f", hardness, tensile, carbon);

    if (hardness > 50 && carbon < 0.7 && tensile > 5600)
    {
        printf("Steel Grade is 10\n");
    }
    else if (hardness > 50 && carbon < 0.7)
    {
        printf("Steel Grade is 9\n");
    }
    else if (carbon < 0.7 && tensile > 5600)
    {
        printf("Steel Grade is 8\n");
    }
    else if (hardness > 50 && tensile > 5600)
    {
        printf("Steel Grade is 7\n");
    }
    else if (hardness > 50 || carbon < 0.7 || tensile > 5600)
    {
        printf("Steel Grade is 6\n");
    }
    else if (hardness < 50 && carbon > 0.7 && tensile < 5600)
    {
        printf("Steel Grade is 5\n");
    }
}