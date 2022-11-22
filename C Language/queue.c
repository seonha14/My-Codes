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

        printf("Yes\n");

    else
        printf("No\n");
}
void isEmpty()
{
    if (F == -1)

        printf("Yes\n");

    else
        printf("No\n");
}

int main()
{
    isEmpty();
    inqueue(5);
    inqueue(3);
    inqueue(2);
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