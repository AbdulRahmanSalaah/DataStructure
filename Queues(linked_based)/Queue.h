// Author: Abdulrahman Salah

// This file contains the class definition for the Queue class.
// The Queue class is a template class that can be used to create a queue of any data type.
// The queue is implemented as a linked list, with a pointer to the front and rear of the queue.
// The Queue class contains the following member functions:
// - enqueue: adds an element to the rear of the queue
// - dequeue: removes an element from the front of the queue
// - size: returns the number of elements in the queue
// - empty: returns true if the queue is empty, false otherwise
// - full: returns true if the queue is full, false otherwise
// - frontElement: returns the element at the front of the queue
// - rearElement: returns the element at the rear of the queue
// - clear: removes all elements from the queue
// - print: prints all elements in the queue
// - search: returns the index of the first occurrence of a given element in the queue
// The Queue class also contains a private Node struct that is used to implement the queue as a linked list.
//----------------------------------------------------------------------------------------------------------------------------------

#include <bits/stdc++.h>
#include <iostream>

#ifndef QUEUE_H
#define QUEUE_H

#pragma once

template <class t>
class Queue
{

private:
    struct Node
    {
        int data;
        Node *next;
    };

    Node *front;
    Node *rear;
    int siz;

public:
    Queue();
    ~Queue();

    void enqueue(t x);
    t dequeue();
    int size();

    bool empty();
    bool full();
    t frontElement();
    t rearElement();
    void clear();
    int print();
    int serach(t x);
};

#endif