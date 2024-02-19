// Author: AbdulRahman Salah

// This file contains the class PriorityQueue which is a template class that represents a priority queue
// priority queue is a data structure that is similar to a queue but it has a priority for each element
// priority queue is implemented using a min heap
// The class contains the following methods:
// 1- top() : to get the top element in the priority queue
// 2- push(t value) : to insert a new element in the priority queue
// 3- pop() : to remove the top element from the priority queue
// 4- print() : to print the priority queue
// 5- size() : to get the size of the priority queue
// The class also contains the following private methods:
// 1- left(int node) : to get the left child of a node
// 2- right(int node) : to get the right child of a node
// 3- parent(int node) : to get the parent of a node
// 4- reheapUp(int pos) : to maintain the heap property (min heap) after inserting a new element
// 5- reheapDown(int pos) : to maintain the heap property (min heap) after removing the top element

#include <bits/stdc++.h>
using namespace std;

#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

#pragma once

template <class t>
class PriorityQueue
{

private:
    vector<t> heap;
    int siz;
    int left(int node);
    int right(int node);
    int parent(int node);
    void reheapUp(int pos);
    void reheapDown(int pos);

public:
    PriorityQueue();
    ~PriorityQueue();

    t top();
    void push(t value);
    void pop();
    void print();
    int size();
    void clear();
};

#include "PriorityQueue.cpp"
#endif