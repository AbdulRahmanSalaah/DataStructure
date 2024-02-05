#ifndef STACK_H
#define STACK_H

#pragma once
#include <bits/stdc++.h>
using namespace std;
const int MAXSTACK = 100;
template <class t>

class Stack
{
private:
    int top;
    t items[MAXSTACK];

public:
    Stack();
    ~Stack();

    void push(t item);
    t pop();
    bool empty();
    bool full();
    void clear();
    t gettop();
    void print();

    t size();
};

#endif