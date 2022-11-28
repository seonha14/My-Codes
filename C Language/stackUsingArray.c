// PRACTICAL 4: Implementation of Stack using Array
// Mohd Azeem | CSE 2B | 2100300100112

#include <stdio.h>
#define N 5

int stack[N];
int top = -1;

void push(int item)
{

    if (top == N - 1)
        printf("Stack Overflow\n");
    else
    {
        top++;
        stack[top] = item;
    }
}

void pop()
{
    if (top == -1)
        printf("Stack Underflow\n");
    else
    {
        printf("Popped : %d\n", stack[top]);
        top--;
    }
}

void display()
{
    int i;
    if (top == -1)
        printf("Empty stack\n");
    else
    {
        printf("Stack elements : ");
        for (int i = top; i >= 0; i--)
            printf("%d ", stack[i]);
    }
    printf("\n");
}

void isEmpty()
{
    if (top == -1)
        printf("Empty\n");
    else
        printf("Not Empty\n");
}

void isFull()
{
    if (top == N - 1)
        printf("Full\n");
    else
        printf("Not Full\n");
}

void main()
{
    isEmpty();
    pop();
    push(5);
    push(6);
    push(7);
    push(8);
    push(9);
    push(10);
    display();
    isFull();
    pop();
    pop();
    display();
    isFull();
}

/*
Output:
Empty
Stack Underflow
Stack Overflow
Stack elements : 9 8 7 6 5
Full
Popped : 9
Popped : 8
Stack elements : 7 6 5
Not Full
*/