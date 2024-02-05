// purpose: Implement the stack class
#include "Stack.h"

template <class t>
Stack<t>::Stack()
{
    top = 0;
}

template <class t>
Stack<t>::~Stack()
{
}

template <class t>
void Stack<t>::push(t item)
{
    if (full())
    {
        cout << "Stack is full" << endl;
        return;
    }
    items[top++] = item;
}

template <class t>
t Stack<t>::pop()
{
    if (empty())
    {
        cout << "Stack is empty" << endl;
        return 0;
    }
    return items[--top];
}

template <class t>
bool Stack<t>::empty()
{
    return top == 0;
}

template <class t>
bool Stack<t>::full()
{
    return top == MAXSTACK;
}

template <class t>
void Stack<t>::clear()
{
    top = 0;
}

template <class t>
t Stack<t>::gettop()
{
    return items[top - 1];
}

template <class t>
void Stack<t>::print()
{
    for (int i = top - 1; i >= 0; i--)
    {
        cout << items[i] << " ";
    }
    cout << endl;
}

template <class t>
t Stack<t>::size()
{
    return top;
}
