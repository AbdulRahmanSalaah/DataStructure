// Author: Abdulrahman Salah
// Purpose: Implementation of the Queue class

#include "Queue.h"


// default constructor
template <class t>
Queue<t>::Queue()
{
    front = 0; // front is the index of the first element in the queue
    rear = -1; // rear is the index of the last element in the queue
    siz = 0;   // size is the number of elements in the queue

    arr = new t[MAX]; // allocating memory for the queue
}

// parameterized constructor to makke the queue dynamic
template <class t>
Queue<t>::Queue(int mx)
{
    front = 0;
    rear = -1;
    siz = 0;
    if (mx >= 0)
    {
        MAX = mx;
    }

    arr = new t[MAX];
}

// destructor to free the memory
template <class t>
Queue<t>::~Queue()
{
    delete[] arr;
}

// enqueue function to add an element to the queue
template <class t>
int Queue<t>::enqueue(t x)
{
    if (full())
    {
        return -1;
    }
    rear = (rear + 1) % MAX;
    arr[rear] = x;
    siz++;
    return 1;
}

// dequeue function to remove an element from the queue
template <class t>
t Queue<t>::dequeue()
{
    t x = arr[front];
    front = (front + 1) % MAX;
    siz--;
    return x;
}

// size function to return the size of the queue
template <class t>
int Queue<t>::size()
{
    return siz;
}

// empty function to check if the queue is empty
template <class t>
bool Queue<t>::empty()
{
    return siz == 0;
}

// full function to check if the queue is full
template <class t>
bool Queue<t>::full()
{
    return siz == MAX;
}

// frontElement function to return the front element of the queue
template <class t>
t Queue<t>::frontElement()
{
    return arr[front];
}

// rearElement function to return the rear element of the queue
template <class t>
t Queue<t>::rearElement()
{
    return arr[rear];
}

// clear function to clear the queue
template <class t>
void Queue<t>::clear()
{
    front = 0;
    rear = -1;
    siz = 0;
}

// print function to print the queue
template <class t>
void Queue<t>::print()
{
    int i = front;
    while (i != rear)
    {
        cout << arr[i] << " ";
        i = (i + 1) % MAX;
    }
    cout << arr[rear] << endl;
}

// search function to search for an element in the queue
template <class t>
int Queue<t>::serach(t x)
{
    int i = front;
    while (i != rear)
    {
        if (arr[i] == x)
        {
            return i;
        }
        i = (i + 1) % MAX;
    }
    if (arr[rear] == x)
    {
        return rear;
    }
    return -1;
}
