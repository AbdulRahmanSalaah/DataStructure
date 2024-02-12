// Author: AbdulRahman Salah

// This file contains the class List which is a template class that represents a doubly linked list
// The class contains the following methods:
// 1- push_back: adds a new element to the end of the list
// 2- push_front: adds a new element to the beginning of the list
// 3- pop_back: removes the last element from the list
// 4- pop_front: removes the first element from the list
// 5- insert: adds a new element at a specific index
// 6- erase: removes the first occurrence of a specific value from the list
// 7- erase_by_index: removes the element at a specific index
// 8- clear: removes all elements from the list
// 9- size: returns the number of elements in the list
// 10- print: prints the elements of the list
// 11- reverse: reverses the list
// 12- sort: sorts the list in ascending order
// 13- search: searches for a specific value in the list
// 14- empty: checks if the list is empty
// 15- full: checks if the list is full

// The class also contains a private struct Node which represents a node in the list
// The struct contains the following attributes:
// 1- data: the value of the node
// 2- next: a pointer to the next node in the list
// 3- prev: a pointer to the previous node in the list

// The class also contains the following attributes:
// 1- head: a pointer to the first node in the list
// 2- tail: a pointer to the last node in the list
// 3- siz: the number of elements in the list
// 4- reversed: a flag to indicate if the list is reversed or not

#include <bits/stdc++.h>
using namespace std;
#ifndef LIST_H
#define LIST_H

#pragma once

template <class t>
class List
{
public:
private:
    struct Node
    {
        t data;
        Node *next;
        Node *prev;
    };
    Node *head;
    Node *tail;
    int siz;
    int reversed;

public:
    List();
    ~List();
    void push_back(t data);
    void push_front(t data);
    void pop_back();
    void pop_front();
    int insert(int index, t value);
    int erase(t value);
    int erase_by_index(int index);
    void clear();
    int size();
    void print();
    void reverse();
    void sort();
    int search(t value);
    bool empty();
    bool full();
};

#endif