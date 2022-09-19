#include <stdio.h>

struct rectangle // Defining structure for Rectangle
{
    int length;
    int breadth;
};

void changeLength(struct rectangle *p, int l) // Function for change in length with new length input
{
    p->length = l; // arrow for accessing original value using Pointers in C.
    p->breadth++;
    (*p).length = 5;  // "(*p).length" is same as "p->length"
    
}

int area(struct rectangle a) // Function for area with structure as an input
{
    int area = a.length * a.breadth;
    return area;
}

int main(void)
{
    struct rectangle r;

    printf("Enter the Length and Breadth of the Rectangle\n");

    scanf("%d%d", &r.length, &r.breadth);

    changeLength(&r, 10); // Passing structure to pointer.

    printf("New Length = %d\n", r.length);
    printf("New Breadth = %d\n", r.breadth);
    printf("Area = %d sq. units.\n", area(r));

    return 0;
}
