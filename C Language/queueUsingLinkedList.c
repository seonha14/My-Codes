#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *ptr;
} * front, *rear, *temp, *front1;

int frontelement();
void enq(int data);
void deq();
void empty();
void display();
void create();
void queuesize();
int count = 0;

void main()
{
    int no, ch, e;
    printf("1. Enque \n");
    printf("2. Deque \n");
    printf("3. Front element \n");
    printf("4. Empty \n");
    printf("5. Exit \n");
    printf("6. Display \n");
    printf("7. Queue Size \n");

    create();
    while (1)
    {
        printf("Enter choice \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter data \n");
            scanf("%d", &no);
            enq(no);
            break;

        case 2:
            deq();
            break;
        case 3:
            e = frontelement();
            if (e != 0)
            {
                printf("Front element - %d\n", e);
            }
            else

            {
                printf("empty\n");
            }
            break;
        case 4:
            empty();
            break;
        case 5:
            exit(0);
        case 6:
            display();
            break;
        case 7:
            queuesize();
            break;

        default:
            printf("Wrong choice \n");
            break;
        }
    }
}

void create()
{
    front = rear = NULL;
}

void queuesize()
{
    printf("Size = %d", count);
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
            printf("%d", front->info);
            free(front);
            front = front1;
        }
        else
        {
            printf("%d", front->info);
            free(front);
            front = NULL;
            rear = NULL;
        }
        count--;
    }
}

int frontelement()
{
    if ((front != NULL) && (rear != NULL))
        return (front->info);
    else
        return 0;
}

void empty()
{
    if ((front == NULL) && (rear == NULL))
        printf("Empty\n");
    else
        printf("Not Empty\n");
}