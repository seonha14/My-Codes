// PRACTICAL 6 - Implementation of Circular Queue using Array.
// Mohd Azeem | CSE 2B | 2100300100112

#include <stdio.h>
#define N 5

int F = -1, R = -1;
int Q[N];

void inqueue(int);
void dequeue();
void display();

void main()
{
    inqueue(5);
    display();
    inqueue(6);
    display();
    inqueue(7);
    display();
    dequeue();
    display();
    inqueue(8);
    display();
    inqueue(9);
    display();
    inqueue(10);
    display();
    dequeue();
    display();
    inqueue(135);
    display();
    inqueue(10);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
}
void display()
{
    if ((F == -1) && (R == -1))
    {
        printf("Empty queue\n");
    }
    else if (F <= R)
    {
        for (int i = F; i <= R; i++)
        {
            printf("%d ", Q[i]);
        }
    }
    else
    {

        for (int i = F; i <= N - 1; i++)
        {
            printf("%d ", Q[i]);
        }
        for (int i = 0; i <= R; i++)
        {
            printf("%d ", Q[i]);
        }
    }
    printf("\n");
}
void inqueue(int element)
{
    if (F == ((R + 1) % N))
    {
        printf("Overflow\n");
    }
    else if ((F == -1) && (R == -1))
    {
        F = F + 1;
        R = (R + 1) % N;
        Q[R] = element;
    }
    else
    {
        R = (R + 1) % N;
        Q[R] = element;
    }
}

void dequeue()
{
    if ((F == -1) && (R == -1))
    {
        printf("Underflow\n");
    }
    else
    {
        printf("Deleted : %d\n", Q[F]);
        if (F == R)
        {
            F = -1;
            R = -1;
        }
        else
            F = (F + 1) % N;
    }
}

/*
Output:
5
5 6
5 6 7
Deleted : 5
6 7
6 7 8
6 7 8 9
6 7 8 9 10
Deleted : 6
7 8 9 10
7 8 9 10 135
Overflow
Deleted : 7
Deleted : 8
Deleted : 9
Deleted : 10
Deleted : 135
Underflow
*/