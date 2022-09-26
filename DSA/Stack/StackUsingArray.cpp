#include <iostream>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *S;
};

void push(Stack *stack, int value)
{
    if (stack->top == stack->size - 1)
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        stack->top++;
        stack->S[stack->top] = value;
    }
}

int pop(Stack *stack)
{
    int x = -1;
    if (stack->top == -1)
    {
        cout << "Stack Underflow" << endl;
    }
    else
    {
        x = stack->S[stack->top];
        stack->top--;
    }
    return x;
}

int peek(Stack st, int pos)
{
    int x = -1;
    int index = st.top - pos + 1; // Calculated formula for index from positon.
    if ((index) < 0)
    {
        cout << "Invalid positon" << endl;
    }
    else
    {
        x = st.S[index];
    }
    return x;
}

int stackTop(Stack st)
{
    if (st.top == -1)
    {
        return -1;
    }
    else
    {
        return st.S[st.top];
    }
}

int isEmpty(Stack st)
{
    if (st.top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(Stack st)
{
    if (st.top == st.size - 1)
    {
        return 1;
    }
    return 0;
}

void createStack(Stack *st)
{
    cout << "Enter the size of the Stack" << endl;
    cin >> st->size;
    st->S = new int[st->size];
    st->top = -1;
    // Stack is now ready
}

void display(Stack st)
{
    for (int i = st.top; i >= 0; i--)
    {
        cout << st.S[i] << endl;
    }
}
int main()
{
    Stack alpha;

    createStack(&alpha);

    // push
    push(&alpha, 5);
    push(&alpha, 2);
    push(&alpha, 0);
    push(&alpha, 2);

    display(alpha);

    // pop
    cout << "Deleted value is: " << pop(&alpha) << endl;
    display(alpha);

    // Remaining lets code video...

    return 0;
}