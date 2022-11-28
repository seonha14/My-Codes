// PRACTICAL 8: Implementation of Queue using Linked List.
// Mohd Azeem | CSE 2B | 2100300100112
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *ptr;
} *front = NULL, *rear = NULL, *temp, *front1;

void frontelement();
void enq(int data);
void deq();
void empty();
void display();
void queuesize();
int count = 0;

void main()
{
    enq(1);
    enq(2);
    enq(3);
    enq(4);
    display();
    deq();
    frontelement();
    display();
    queuesize();
    empty();
}

void queuesize()
{
    printf("Size = %d\n", count);
}
void enq(int data)
{
    if (rear == NULL)
    {
        rear = (struct node *)malloc(sizeof(struct node));
        rear->ptr = NULL;
        rear->info = data;
        front = rear;
    }
    else
    {
        temp = (struct node *)malloc(sizeof(struct node));
        rear->ptr = temp;
        temp->info = data;
        temp->ptr = NULL;
        rear = temp;
    }
    count++;
}
void display()
{
    front1 = front;
    if ((front1 == NULL) && (rear == NULL))
    {
        printf("Empty\n");
        return;
    }
    while (front1 != rear)
    {
        printf("%d ", front1->info);
        front1 = front1->ptr;
    }
    if (front1 == rear)
    {
        printf("%d ", front1->info);
    }
    printf("\n");
}
void deq()
{
    front1 = front;
    if (front1 == NULL)
    {
        printf("Empty\n");
        return;
    }
    else
    {
        if (front1->ptr != NULL)
        {
            front1 = front->ptr;
            printf("%d\n", front->info);
            free(front);
            front = front1;
        }
        else
        {
            printf("%d\n", front->info);
            free(front);
            front = NULL;
            rear = NULL;
        }
        count--;
    }
}
void frontelement()
{
    int e;
    if ((front != NULL) && (rear != NULL))
        printf("Front element - %d\n", (front->info));
    else
        printf("empty\n");
}

void empty()
{
    if ((front == NULL) && (rear == NULL))
        printf("Empty\n");
    else
        printf("Not Empty\n");
}

/*
Output
1 2 3 4
1
Front element - 2
2 3 4
Size = 3
Not Empty
*/