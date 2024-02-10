// Author: Abdulrahman Salah

// This file contains the class List which is a template class that represents a list of elements of any type.
// The class contains the following methods:
// 1- insert: to insert an element at a specific index.
// 2- remove: to remove an element from a specific index.
// 3- print: to print the list.
// 4- search: to search for an element in the list.
// 5- clear: to clear the list.
// 6- empty: to check if the list is empty.
// 7- full: to check if the list is full.
// 8- size: to get the size of the list.
// The List can work as a stack or a queue or a normal list based on the way you use the insert and remove methods.

#include <bits/stdc++.h>
using namespace std;

#ifndef LIST_H
#define LIST_H

#pragma once

template <class t>
class List
{

private:
    int siz;
    t *arr;
    int MAX = 100;

public:
    List(int mx);
    List();
    ~List();
    void push_back(t data);
    void push_front(t data);
    void pop_back();
    void pop_front();
    int insert(int index, t element);
    int erase(t value);
    int erase_by_index(int index);

    void print();
    void reverse();
    void sort();
    int search(t key);
    void clear();
    bool empty();
    bool full();
    int size();
};

#endif