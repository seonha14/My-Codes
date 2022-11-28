// PRACTICAL 7: Implementation of Stack using Linked List
// Mohd Azeem | CSE 2B | 2100300100112

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *ptr;
} *top = NULL, *top1, *temp;
int count = 0;
void push(int data)
{

    if (top == NULL)
    {
        top = (struct node *)malloc(sizeof(struct node));
        top->ptr = NULL;
        top->info = data;
    }
    else
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->ptr = top;
        temp->info = data;
        top = temp;
    }
    count++;
}

void pop()
{
    top1 = top;
    if (top1 == NULL)
        printf("Underflow \n");
    else
    {
        printf("Popped : %d\n", top->info);
        top = top->ptr;
        free(top1);
        count--;
    }
}

void stackcount()
{
    printf("Count: %d \n", count);
}
void display()
{
    top1 = top;
    if (top1 == NULL)
    {
        printf("Empty stack\n");
        return;
    }
    while (top1 != NULL)
    {
        printf("%d ", top1->info);
        top1 = top1->ptr;
    }
    printf("\n");
}

void isEmpty()
{
    if (top == NULL)
        printf("Empty\n");
    else
        printf("Not Empty\n");
}

void main()
{
    isEmpty();
    pop();
    push(5);
    display();
    push(6);
    display();
    push(7);
    push(8);
    push(9);
    push(10);
    display();
    pop();
    pop();
    display();
    stackcount();
}

/*
Output:
Empty
Underflow
5
6 5
10 9 8 7 6 5
Popped : 10
Popped : 9
8 7 6 5
Count: 4
*/