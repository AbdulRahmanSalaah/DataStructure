#include "Stack.h"

template <class t>
Stack<t>::Stack()
{
    top = NULL;
    siz = 0;
}

template <class t>
Stack<t>::~Stack()
{
}

template <class t>
void Stack<t>::push(t item)
{
    Node *temp = new Node; // in C++ we can use new instead of malloc in C  to allocate memory for a new node
    temp->data = item;     // assign the value to the new node
    temp->next = top;      // make the new node point to the current top
    top = temp;            // make the new node the top
    siz++;
}

template <class t>
t Stack<t>::pop()
{
    if (top == NULL)
    {
        return -1;
    }
    Node *temp = top;   // create a temporary node and make it point to the top
    t item = top->data; // store the value of the top in a variable
    top = top->next;    // make the next node the top
    delete temp;        // delete the old top
    return item;        // return the value of the old top
    siz--;
}

template <class t>
bool Stack<t>::empty()
{
    return top == NULL;
}

template <class t>
bool Stack<t>::full()
{
    return false;
}

template <class t>
void Stack<t>::clear()
{
    Node *temp = top;
    while (top != NULL)
    {
        top = top->next;
        delete temp;
        temp = top;
    }
    siz = 0;
}

template <class t>
t Stack<t>::gettop()
{
    t item = top->data;
    return item;
}

template <class t>
void Stack<t>::print()
{
    Node *temp = top;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

template <class t>
int Stack<t>::size()
{
    return siz;
}
