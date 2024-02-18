// Author: AbdulRahman Salah

// This is the normal Binary Search Tree but with some optimizations and improvements called AVL Tree
// where the difference between heights of left and right subtrees cannot be more than one for all nodes.(0, 1, -1)
// The difference between the Bst and AVL is that AVL is always balanced and the height is always O(log n)
// The tree is balanced using rotations and the height is always O(log n)
// This optimization is very useful in searching and inserting and deleting nodes in the tree

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
    int height;
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
    Node *balanceTree(Node *node);
    Node *rotateRight(Node *node);
    Node *rotateLeft(Node *node);
    int balanceFactor(Node *node);
    void updateHeight(Node *node);

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

#include "Tree.cpp" // Include the implementation file here
#endif
