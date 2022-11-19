#include <stdio.h>
#define N 5

int Q[N];
int F = -1, R = -1;
void insert(int x);
void delete ();
void display();
int main()
{
    insert(5);
    display();
    insert(6);
    display();
    insert(7);
    display();
    delete ();
    insert(8);
    display();
    insert(9);
    display();
    insert(10);
    display();
    insert(11);
    display();
}

void insert(int x)
{
    R = (R + 1) % N;
    if (F == R)
        printf("Overflow\n");
    else if (F == -1)
    {
        F = 0;
        Q[R] = x;
    }
    else
        Q[R] = x;
}

void delete ()
{
    if ((F == -1) && (R == -1))
        printf("Underflow\n");
    else if (F == R)
    {
        printf("Deleted = %d \n", Q[F]);
        F = R = -1;
    }
    else
    {
        printf("Deleted = %d \n", Q[F]);
        F = (1 + F) % N;
    }
}

void display()
{

    if (F == -1)
        printf("Empty\n");
    else if (F <= R)
    {
        for (int i = F; i <= R; i++)
        {
            printf("%d ", Q[i]);
        }
    }
    else
    {
        for (int i = F; i < N; i++)
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