#include <iostream>
using namespace std;

template <class T>
class Stack
{
private:
    T S[10];
    int Top = -1;

public:
    void push(T element);
    T pop();
};

template <class T>             // Syntax for Template class
void Stack<T>::push(T element) // Syntax class<T>::FNname()
{
    cout << "Pushed : " << element << endl;
    Top++;
    S[Top] = element;
}

template <class T>
T Stack<T>::pop()
{
    T temp = S[Top];
    Top--;
    return temp;
}
int main()
{
    // Syntax for creating objects of different data types

    Stack<int> Obj1;
    Obj1.push(5);
    cout << Obj1.pop() << endl;

    Stack<float> Obj2;
    Obj2.push(5.8);
    cout << Obj2.pop() << endl;
}