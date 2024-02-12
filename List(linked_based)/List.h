// Author: AbdulRahanan Salah
//  This file contains the class List which is a template class that can be used to create a list of any data type
//  The class contains the following methods:
// 1- push_back: adds an element to the end of the list
// 2- push_front: adds an element to the beginning of the list
// 3- pop_back: removes the last element in the list
// 4- pop_front: removes the first element in the list
// 5- insert: adds an element at a specific index in the list
// 6- erase: removes the first occurrence of a specific element in the list
// 7- erase_by_index: removes the element at a specific index in the list
// 8- clear: removes all elements in the list
// 9- size: returns the number of elements in the list
// 10- print: prints all elements in the list
// 11- reverse: reverses the order of elements in the list
// 12- sort: sorts the elements in the list in ascending order
// 13- search: searches for a specific element in the list
// 14- empty: checks if the list is empty
// 15- full: checks if the list is full
// The class contains a private struct Node that represents a node in the Linked List


#include <bits/stdc++.h>
using namespace std;

#ifndef LIST_H
#define LIST_H

#pragma once
template <class t>
class List
{

private:
    struct Node
    {
        t data;
        Node *next;
    };
    Node *head;
    int siz;

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