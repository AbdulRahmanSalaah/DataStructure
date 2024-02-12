#include "List.h"

template <class t>
List<t>::List()
{
    head = NULL;
    tail = NULL;
    siz = 0;
    reversed = 0;
}

template <class t>
List<t>::~List()
{
    clear();
}

template <class t>
void List<t>::push_back(t data)
{
    Node *newNode = new Node;
    newNode->data = data;

    if (head == NULL) // if the list is empty
    {
        head = newNode;
        tail = newNode;
        newNode->next = NULL;
        newNode->prev = NULL;
    }
    else
    {
        newNode->next = NULL;
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    siz++;
}

template <class t>
void List<t>::push_front(t data)
{
    Node *newNode = new Node;
    newNode->data = data;

    if (head == NULL) // if the list is empty
    {
        head = newNode;
        tail = newNode;
        newNode->next = NULL;
        newNode->prev = NULL;
    }
    else
    {
        newNode->next = head;
        newNode->prev = NULL;
        head->prev = newNode;
        head = newNode;
    }

    siz++;
}

template <class t>
void List<t>::pop_back()
{
    Node *temp = tail;
    tail = tail->prev;
    tail->next = NULL;
    delete temp;
    siz--;
}

template <class t>
void List<t>::pop_front()
{
    Node *temp = head;
    head = head->next;
    head->prev = NULL;
    delete temp;
    siz--;
}

template <class t>
int List<t>::insert(int index, t value)
{
    if (index < 0 || index > siz)
    {
        return -1;
    }
    else if (index == 0)
    {
        push_front(value);
    }
    else if (index == siz)
    {
        push_back(value);
    }
    else
    {
        Node *newNode = new Node;
        newNode->data = value;
        Node *cur = head;
        for (int i = 0; i < index - 1; i++)
        {
            cur = cur->next;
        }
        newNode->next = cur->next;     // link the new node to the next node
        newNode->prev = cur;           // link the new node to the previous node
        cur->next = newNode;           // link the previous node to the new node
        newNode->next->prev = newNode; // link the next node to the new node

        siz++;
    }
    return 1;
}

template <class t>
int List<t>::erase(t value)
{
    if (head == NULL)
        return -1;
    if (head->data == value)
    {
        pop_front();
        return 1;
    }
    if (tail->data == value)
    {
        pop_back();
        return 1;
    }
    Node *cur = head;
    while (cur != NULL)
    {
        if (cur->data == value)
        {
            break;
        }
        cur = cur->next;
    }
    if (cur == NULL)
    {
        return -1;
    }
    cur->prev->next = cur->next;
    cur->next->prev = cur->prev;
    delete cur;
    siz--;
    return 1;
}

template <class t>
int List<t>::erase_by_index(int index)
{

    if (index < 0 || index >= siz)
    {
        return -1;
    }
    if (index == 0)
    {
        pop_front();
        return 1;
    }
    if (index == siz - 1)
    {
        pop_back();
        return 1;
    }
    Node *cur = head;
    for (int i = 0; i < index; i++)
    {
        cur = cur->next;
    }
    cur->prev->next = cur->next;
    cur->next->prev = cur->prev;
    delete cur;

    siz--;
    return 1;
}

template <class t>
void List<t>::clear()
{

    Node *cur = head;
    while (cur != NULL)
    {
        Node *temp = cur;
        cur = cur->next;
        delete temp;
    }
    head = NULL;
    tail = NULL;
    siz = 0;
}

template <class t>
int List<t>::size()
{
    return siz;
}

template <class t>
void List<t>::print()
{
    if (reversed == 1)
    {
        Node *cur = tail;
        while (cur != NULL)
        {
            cout << cur->data << " ";
            cur = cur->prev;
        }
        cout << endl;
        return;
    }
    else
    {
        Node *cur = head;
        while (cur != NULL)
        {
            cout << cur->data << " ";
            cur = cur->next;
        }
        cout << endl;
    }
}

template <class t>
void List<t>::reverse()
{

    if (reversed == 0)
    {
        reversed = 1;
    }
    else
    {
        reversed = 0;
    }
}

template <class t>
void List<t>::sort()
{
    Node *cur = head;
    while (cur != NULL)
    {
        Node *temp = cur->next;
        while (temp != NULL)
        {
            if (cur->data > temp->data)
            {
                t tempData = cur->data;
                cur->data = temp->data;
                temp->data = tempData;
            }
            temp = temp->next;
        }
        cur = cur->next;
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

template <class t>
bool List<t>::empty()
{
    return head == NULL;
}

template <class t>
bool List<t>::full()
{
    return false;
}
