// Author : AbdulRahman Salah
#include "PriorityQueue.h"

// -----------------------------Constructor and Destructor-------------------------------------------
template <class t>
PriorityQueue<t>::PriorityQueue()
{
    siz = 0;
}

template <class t>
PriorityQueue<t>::~PriorityQueue()
{
    heap.clear();
    siz = 0;
}
// -----------------------------Private Methods-------------------------------------------
template <class t>
int PriorityQueue<t>::left(int node) // to get left child
{
    int p = 2 * node + 1;
    if (p >= siz)
    {
        return -1;
    }
    return p;
}

template <class t>
int PriorityQueue<t>::right(int node) //  to get right child
{
    int p = 2 * node + 2;
    if (p >= siz)
    {
        return -1;
    }
    return p;
}

template <class t>
int PriorityQueue<t>::parent(int node) // to get parent
{
    if (node == 0)
    {
        return -1;
    }
    return (node - 1) / 2;
}

template <class t>
void PriorityQueue<t>::reheapUp(int pos) // to maintain the heap property  (min heap)
{

    int p = parent(pos);
    if (pos == 0 || heap[p] < heap[pos]) // stop when the parent is smaller than the child
    {
        return;
    }
    swap(heap[p], heap[pos]);
    reheapUp(p);
}

template <class t>
void PriorityQueue<t>::reheapDown(int pos) // to maintain the heap property (min heap)
{
    int l = left(pos);
    if (l == -1) // if no child
    {
        return;
    }
    int r = right(pos);
    if (r != -1 && heap[r] < heap[l]) // is right smaller than left?
    {
        l = r; // if yes, then l = r
    }
    if (heap[pos] > heap[l]) // is the parent greater than the child?
    {
        swap(heap[pos], heap[l]); // if yes, then swap
        reheapDown(l);            // maintain the heap property (recursively)
    }
}

// -----------------------------Public Methods-------------------------------------------
template <class t>
t PriorityQueue<t>::top() // to get the top element  (minimum element)
{
    if (siz == 0)
    {
        return -1;
    }
    return heap.front();
}

template <class t>
void PriorityQueue<t>::push(t value) // to insert a value  (insert at the end and then maintain the heap property)
{
    heap.push_back(value); // insert at the end
    siz++;
    reheapUp(heap.size() - 1); // maintain the heap property
}

template <class t>
void PriorityQueue<t>::pop() // to remove the top element
{
    if (siz == 0)
    {
        return;
    }
    heap[0] = heap.back(); // replace the top element with the last element
    siz--;
    heap.pop_back(); // remove the last element
    reheapDown(0);   // maintain the heap property
}

template <class t>
void PriorityQueue<t>::print()   
{
    for (int i = 0; i < siz; i++)
    {
        cout << heap[i] << " ";
    }
    cout << endl;
}
template <class t>
int PriorityQueue<t>::size()
{
    return siz;
}

template <class t>
void PriorityQueue<t>::clear()
{
    heap.clear();
    siz = 0;
}
