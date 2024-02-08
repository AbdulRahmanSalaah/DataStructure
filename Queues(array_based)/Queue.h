// Author: Abdulrahman Salah

// This is the header file for the Queue class.
// This class is a template class that can be used to create a queue of any data type.
// The class has the following member functions:
// 1. enqueue: to add an element to the queue
// 2. dequeue: to remove an element from the queue
// 3. size: to return the size of the queue
// 4. empty: to check if the queue is empty
// 5. full: to check if the queue is full
// 6. frontElement: to return the front element of the queue
// 7. rearElement: to return the rear element of the queue
// 8. clear: to clear the queue
// 9. print: to print the queue
// 10. search: to search for an element in the queue
// The class also has a constructor to create a queue of a given size, and a destructor to free the memory allocated for the queue.
//----------------------------------------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

#ifndef QUEUE_H
#define QUEUE_H

#pragma once
template <class t>
class Queue
{

private:
    int front, rear, siz;
    t *arr;
    int MAX = 100;

public:
    Queue(int mx);
    Queue();
    ~Queue();
    int enqueue(t x);
    t dequeue();
    int size();

    bool empty();
    bool full();
    t frontElement();
    t rearElement();
    void clear();
    void print();
    int serach(t x);
};

#endif