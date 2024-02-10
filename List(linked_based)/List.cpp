#include "List.h"

// constructor  to initialize the list
template <class t>
List<t>::List()
{
    head = NULL;
    siz = 0;
}

// destructor to delete the list
template <class t>
List<t>::~List()
{
    clear();
}

// add a new node to the end of the list
// if the list is empty, the new node will be the head

// if the list is not empty

//    1. start from the head
//    2. move to the next node until the last node
//    3. add the new node to the next pointer of the last node 

// the size of the list will be incremented

template <class t>
void List<t>::push_back(t data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL) // if the list is empty
    {
        head = newNode;
    }
    else // if the list is not empty
    {

        Node *cur = head;
        while (cur->next != NULL)
        {
            cur = cur->next;
        }
        cur->next = newNode;
    }
    siz++;
}

// add a new node to the beginning of the list
// the new node will be the head and the size of the list will be incremented
template <class t>
void List<t>::push_front(t data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    siz++;
}

// delete the last node in the list
// if the list has only one node, the head will be NULL
// if the list has more than one node, the tail will be updated to the previous node
// the size of the list will be decremented
template <class t>
void List<t>::pop_back()
{
    Node *cur = head;
    Node *prev = NULL;
    while (cur->next != NULL)
    {
        prev = cur;
        cur = cur->next;
    }
    if (prev == NULL)
    {
        head = NULL;
    }
    else
    {
        prev->next = NULL;
    }
    delete cur;
    siz--;
}

// delete the first node in the list
// the head will be updated to the next node
// the size of the list will be decremented
template <class t>
void List<t>::pop_front()
{
    Node *cur = head;
    head = cur->next;
    delete cur;
    siz--;
}

// insert a new node at a specific index
// if the index is 0, the new node will be the head
// if the index is the size of the list, the new node will be the tail
// if the index is not 0 or the size of the list, the new node will be in the middle
// the size of the list will be incremented
template <class t>
int List<t>::insert(int index, t data)
{

    if (index < 0 || index > siz)
    {
        return -1;
    }
    Node *newNode = new Node;
    newNode->data = data;

    if (index == 0)
    {
        // newNode->next = head;
        // head = newNode;
        push_front(data);
    }
    else
    {
        Node *cur = head;
        for (int i = 0; i < index - 1; i++)
        {
            cur = cur->next;
        }
        newNode->next = cur->next;
        cur->next = newNode;
        siz++;
    }

    return 1;
}

// delete a node with a specific value
// if the value is in the first node, the head will be updated to the next node
// if the value is in the middle or last node, the previous node will be updated to the next node
// the size of the list will be decremented
template <class t>
int List<t>::erase(t value)
{

    Node *cur = head;
    Node *prev = NULL;
    while (cur != NULL)
    {
        if (cur->data == value)
        {
            if (prev == NULL)
            {
                head = cur->next; // if the value is in the first node
            }
            else
            {
                prev->next = cur->next; // if the value is in the middle or last node
            }
            delete cur;
            siz--;
            return 1;
        }
        prev = cur;
        cur = cur->next;
    }
    return -1;
}

// delete a node at a specific index
// if the index is 0, the head will be updated to the next node
// if the index is the size of the list, the previous node will be updated to the next node
// if the index is not 0 or the size of the list, the previous node will be updated to the next node
// the size of the list will be decremented
template <class t>
int List<t>::erase_by_index(int index)
{
    if (index < 0 || index >= siz)
    {
        return -1;
    }
    Node *cur = head;
    Node *prev = NULL;
    for (int i = 0; i < index; i++)
    {
        prev = cur;
        cur = cur->next;
    }
    if (prev == NULL)
    {
        head = cur->next; // if the value is in the first node
    }
    else
    {
        prev->next = cur->next; // if the value is in the middle or last node
    }
    delete cur;
    siz--;
    return 1;
}

// delete all nodes in the list
// the head will be updated to NULL
// the size of the list will be 0
template <class t>
void List<t>::clear()
{
    Node *cur = head;
    while (cur != NULL)
    {
        head = cur->next;
        delete cur;
        cur = head;
    }
    siz = 0;
}

// return the size of the list
template <class t>
int List<t>::size()
{
    return siz;
}

// print all nodes in the list
template <class t>
void List<t>::print()
{
    Node *cur = head;
    while (cur != NULL)
    {
        cout << cur->data << " ";
        cur = cur->next;
    }
    cout << endl;
}

// reverse the list
// the list will be reversed by changing the next pointer of each node
// the head will be updated to the last node

//    1. start from the first node
//    2. save the next node in a variable  (next = cur->next)
//    3. change the next pointer of the current node to the previous node (cur->next = prev)
//    4. move the previous node to the current node (prev = cur)
//    5. move the current node to the next node (cur = next)
//    6. repeat the previous steps until the end of the list (cur != NULL)
//    7. update the head to the previous node (head = prev)

// the time complexity of the reverse function is O(n)

template <class t>
void List<t>::reverse()
{
    Node *cur = head;
    Node *prev = NULL;
    Node *next = NULL;
    while (cur != NULL)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    head = prev;
}

// sort the list in ascending order
// the list will be sorted using bubble sort algorithm
//    1. start from the first node
//    2. compare the current node with the next node
//    3. if the current node is greater than the next node, swap the data
//    4. move to the next node
//    5. repeat the previous steps until the end of the list
//    6. move to the next node and repeat the previous steps
// the time complexity of the bubble sort algorithm is O(n^2)
template <class t>
void List<t>::sort()
{
    Node *cur = head;
    Node *index = NULL;
    t temp;
    if (head == NULL)
    {
        return;
    }
    else
    {
        while (cur != NULL)
        {
            index = cur->next;
            while (index != NULL)
            {
                if (cur->data > index->data)
                {
                    temp = cur->data;
                    cur->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            cur = cur->next;
        }
    }
}
template <class t>
int List<t>::search(t value)
{
    Node *cur = head;
    int index = 0;
    while (cur != NULL)
    {
        if (cur->data == value)
        {
            return index;
        }
        cur = cur->next;
        index++;
    }
    return -1;
}

// check if the list is empty
template <class t>
bool List<t>::empty()
{
    return head == NULL;
}

// check if the list is full (always return false)
template <class t>
bool List<t>::full()
{
    return false;
}
