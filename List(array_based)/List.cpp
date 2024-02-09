// Author: Abdulrahman Salah
// This file contains the implementation of the List class.

#include "List.h"

// Constructor to initialize the list with a dynamic size.
template <class t>
List<t>::List(int mx)
{

    siz = 0;
    if (mx >= 0)
        MAX = mx;
    else
        MAX = 100;
    MAX = mx;
    arr = new t[MAX];
}

// Default constructor to initialize the list with a default size of 100.
template <class t>
List<t>::List()
{
    siz = 0;
    arr = new t[MAX];
}

// Destructor to free the memory allocated for the list.
template <class t>
List<t>::~List()
{
    delete[] arr;
}

// Method to insert an element at a specific index.
// The method returns 1 if the element is inserted successfully,
// and -1 if the index is out of range or the list is full.
// The method takes index(1 based) and the element to be inserted as parameters.
// The method shifts the elements to the right to make space for the new element.
// The method takes O(n) time complexity.
template <class t>
int List<t>::insert(int index, t element)
{
    index--; // user will give 1 based index but we will use 0 based index

    if (index < 0 || index > siz)
    {
        return -1;
    }
    else if (siz == MAX)
    {
        return -1;
    }
    else
    {
        for (int i = siz - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
        siz++;
        return 1;
    }
}

// Method to remove an element from a specific index.
// The method takes index(1 based) as a parameter.
// The method returns nothing.
// The method shifts the elements to the left to fill the gap created by removing the element.
// The method takes O(n) time complexity.
template <class t>
void List<t>::remove(int index)
{
    index--; // user will give 1 based index but we will use 0 based index
    if (index < 0 || index >= siz)
    {
        return;
    }
    else
    {
        for (int i = index + 1; i < siz - 1; i++)
        {
            arr[i - 1] = arr[i];
        }
        siz--;
    }
}

// Method to print the list.
template <class t>
void List<t>::print()
{
    for (int i = 0; i < siz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Method to search for an element in the list.
template <class t>
int List<t>::search(t key)
{
    for (int i = 0; i < siz; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

// Method to clear the list.
template <class t>
void List<t>::clear()
{
    siz = 0;
}

// Method to check if the list is empty.
template <class t>
bool List<t>::empty()
{
    return siz == 0;
}

// Method to check if the list is full.
template <class t>
bool List<t>::full()
{
    return siz == MAX;
}

// Method to get the size of the list.
template <class t>
int List<t>::size()
{
    return siz;
}
