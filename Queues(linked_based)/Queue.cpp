// Author: Abdulrahman Salah

// This file contains the class implementation for the Queue class.

#include "Queue.h"

// The constructor initializes the front and rear pointers to NULL, and the size to 0.
template <class t>
Queue<t>::Queue()
{
    front = NULL;
    rear = NULL;
    siz = 0;
}

// The destructor calls the clear function to remove all elements from the queue.
template <class t>
Queue<t>::~Queue()
{
    clear();
}


// The enqueue function adds an element to the rear of the queue.
// It creates a new node, sets its data to the given value,
// and sets its next pointer to NULL.
// If the queue is empty,
    // it sets both the front and rear pointers to the new node.
// Otherwise,
    // it sets the next pointer of the current rear node to the new node,
// and updates the rear pointer to the new node.
// Finally, it increments the size.
template <class t>
void Queue<t>::enqueue(t x)
{
    Node *temp = new Node;
    temp->data = x;
    temp->next = NULL;
    if (front == NULL)
    {
        front = temp;
        rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
    siz++;
}



// The dequeue function removes an element from the front of the queue.
// If the queue is empty,
    // it returns -1.
// Otherwise,
    // it creates a temporary pointer to the front node,
    // updates the front pointer to the next node,
    // retrieves the data from the front node,
    // deletes the front node,
    // decrements the size,
    // and returns the retrieved data.
template <class t>
t Queue<t>::dequeue()
{
    if (front == NULL)
    {
        return -1;
    }
    else
    {
        Node *temp = front;
        front = front->next;
        t x = temp->data;
        delete temp;
        siz--;
        return x;
    }
}



// The size function returns the number of elements in the queue.
template <class t>
int Queue<t>::size()
{
    return siz;
}

// The empty function returns true if the queue is empty, and false otherwise.
template <class t>
bool Queue<t>::empty()
{
    return front == NULL;
}

// The full function returns false, as the queue is never full in this implementation.
template <class t>
bool Queue<t>::full()
{
    return false;
}

// The frontElement function returns the element at the front of the queue.
template <class t>
t Queue<t>::frontElement()
{

    return front->data;
}

// The rearElement function returns the element at the rear of the queue.
template <class t>
t Queue<t>::rearElement()
{
    return rear->data;
}

// The clear function removes all elements from the queue.
template <class t>
void Queue<t>::clear()
{
    while (front != NULL)
    {
        Node *temp = front;
        front = front->next;
        delete temp;
    }
    rear = NULL;
    siz = 0;
}

// The print function prints all elements in the queue.
template <class t>
int Queue<t>::print()
{
    if (front == NULL)
    {
        return -1;
    }
    Node *temp = front;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    return 1;
}

// The search function returns the index of the first occurrence of a given element in the queue.
template <class t>
int Queue<t>::serach(t x)
{
    Node *temp = front;
    int i = 0;
    while (temp != NULL)
    {
        if (temp->data == x)
        {
            return i + 1;  // 1-based indexing
        }
        temp = temp->next;
        i++;
    }
    return -1;
}
