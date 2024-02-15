// Author: AbdulRahman Salah
// This file contains the class Tree which is a template class that represents a binary search tree
// The class contains the following methods:
// 1. Tree() : constructor that initializes the root to NULL and the size to 0
// 2. ~Tree() : destructor that calls the clear method to delete all nodes in the tree
// 3. insert(t data) : inserts a node with the given data in the tree and maintains the binary search tree property
// 4. remove(t data) : removes the node with the given data from the tree and maintains the binary search tree property
// 5. search(t data) : returns true if the tree contains a node with the given data, otherwise returns false
// 6. inorder() : prints the nodes of the tree in inorder traversal (left, root, right)
// 7. preorder() : prints the nodes of the tree in preorder traversal (root, left, right)
// 8. postorder() : prints the nodes of the tree in postorder traversal (left, right, root)
// 9. FindMin(Node *node) : returns a pointer to the node with the minimum value in the tree
// 10. FindMax(Node *node) : returns a pointer to the node with the maximum value in the tree
// 11. depth() : returns the depth of the tree
// 12. LeavesCount() : returns the number of leaves in the tree
// 13. print() : prints the nodes of the tree in inorder traversal
// 14. empty() : returns true if the tree is empty, otherwise returns false
// 15. size() : returns the number of nodes in the tree
// 16. clear() : deletes all nodes in the tree
// The class also contains a private struct Node that represents a node in the tree
// The struct contains the following fields:
// 1. data : the data of the node
// 2. left : a pointer to the left child of the node
// 3. right : a pointer to the right child of the node
// The class also contains private helper methods for the public methods.

#include <bits/stdc++.h>
using namespace std;

#ifndef TREE_H
#define TREE_H

#pragma once

template <class t>
class Tree
{

private:
    struct Node
    {
        t data;
        Node *left;
        Node *right;
    };
    Node *root;
    int siz;
    // -----------------------------Private Methods----------------------------------- Helper Methods
    Node *clearTree(Node *node);
    void inorderTraversal(Node *node);
    void preorderTraversal(Node *node);
    void postorderTraversal(Node *node);
    int TreeDepth(Node *node);
    int TreeLeavesCount(Node *node);
    Node *searchRec(Node *node, t data);
    Node *DeleteFromTree(Node *node, t data);
    Node *insertTree(Node *node, t data);

public:

    Tree();
    ~Tree();

    // -----------------------------Public Methods----------------------------------- User Interface
    void insert(t data);
    void remove(t data);
    bool search(t data);
    void inorder();
    void preorder();
    void postorder();
    Node *FindMin(Node *node);
    Node *FindMax(Node *node);
    int depth();
    int LeavesCount();
    void print();
    bool empty();
    int size();
    void clear();
};

#endif
