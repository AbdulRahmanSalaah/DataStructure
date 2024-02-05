
#include <bits/stdc++.h>
using namespace std;

template <class t>
class Stack
{
    struct Node
    {
        t data;
        Node *next;
    };
    int siz;
    Node *top;

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

    int size();
};
