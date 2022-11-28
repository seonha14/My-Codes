// PRACTICAL 5: Implementation of Queue using Array.
// Mohd Azeem | CSE 2B | 2100300100112

#include <stdio.h>
#define N 5

int Q[N];
int F = -1;
int R = -1;

void inqueue(int value)
{
    if ((F == -1) && (R == -1))
    {
        F = R = 0;
        Q[R] = value;
    }
    else if (R < N - 1)
    {
        R = R + 1;
        Q[R] = value;
    }
}
void dequeue()
{
    int x = -1;
    if (R == -1)
        printf("Underflow\n");
    else
    {
        printf("Deleted - %d\n", Q[F]);

        F = F + 1;
    }
}
void display()
{
    for (int i = F; i <= R; i++)
    {
        printf("%d ", Q[i]);
    }
    printf("\n");
}
void isfull()
{
    if (R == N - 1)

        printf("Full\n");

    else
        printf("Not Full\n");
}
void isEmpty()
{
    if (F == -1)

        printf("Empty\n");

    else
        printf("Not Empty\n");
}

int main()
{
    isEmpty();
    inqueue(5);
    inqueue(3);
    inqueue(2);
    display();
    dequeue();
    isfull();
    display();
    dequeue();
    display();
    inqueue(6);
    display();
    inqueue(8);
    display();
}
/*
Output:
Empty
5 3 2
Deleted - 5
Not Full
3 2
Deleted - 3
2
2 6
2 6 8
*/