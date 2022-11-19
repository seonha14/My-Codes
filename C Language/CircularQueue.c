#include <stdio.h>
#define N 5

int F = -1, R = -1;
int Q[N];

void display()
{
    if ((F == -1) && (R == -1))
    {
        printf("Empty queue\n");
    }
    if (F <= R)
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
void insert(int element)
{
    if ((F == -1) && (R == -1))
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

void delete ()
{
    if ((F == -1) && (R == -1))
    {
        printf("Underflow\n");
    }
    else
    {
        printf("Deleted - %d\n", Q[F]);
        if (F == R)
        {
            F = -1;
            R = -1;
        }
        else
            F = (F + 1) % N;
    }
}
int main()
{
    // insert(5);
    // insert(4);
    // insert(6);
    // insert(7);
    // insert(9);
    // display();
    // delete ();
    // display();
    // delete ();
    // display();
    // delete ();
    // display();
    // insert(12);
    // display();
    // insert(1);
    // display();
    // insert(7);
    // display();

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