// Author: AbdulRahman Salah
// Purpose: Implementation of the Tree class methods
// divided into public and private methods
// The private methods are helper methods for the public methods
// The public methods are the main methods that the user can use to interact with the tree

#include "Tree.h"

// -----------------------------Constructors and Destructors-----------------------------------
template <class t>
Tree<t>::Tree()
{
    root = NULL; // empty tree
    siz = 0;     // size of tree
}

template <class t>
Tree<t>::~Tree()
{
    clear(); // clear the tree to avoid memory leaks
}

// -----------------------------Public Methods----------------------------------- User Interface

template <class t>
void Tree<t>::insert(t data) // insert the data into the tree
{
    root = insertTree(root, data);

    siz++;
}

template <class t>
void Tree<t>::remove(t data) // remove the data from the tree
{
    root = DeleteFromTree(root, data);
    siz--;
}

template <class t>
bool Tree<t>::search(t data) // search for the data in the tree
{
    return searchRec(root, data) != NULL;
}

template <class t>
void Tree<t>::inorder() // traverse the tree in inorder (left, root, right)
{

    inorderTraversal(root);
    cout << endl;
}

template <class t>
void Tree<t>::preorder() // traverse the tree in preorder (root, left, right)
{
    preorderTraversal(root);
    cout << endl;
}

template <class t>
void Tree<t>::postorder() // traverse the tree in postorder (left, right, root)
{
    postorderTraversal(root);
    cout << endl;
}

template <class t>
typename Tree<t>::Node *Tree<t>::FindMin(Node *node) // find the minimum value in the tree (leftmost node)
{
    if (node == NULL)
    {
        return NULL;
    }
    if (node->left == NULL)
    {
        return node;
    }
    return FindMin(node->left);
}

template <class t>
typename Tree<t>::Node *Tree<t>::FindMax(Node *node) // find the maximum value in the tree (rightmost node)
{
    if (node == NULL)
    {
        return NULL;
    }
    if (node->right == NULL)
    {
        return node;
    }
    return FindMax(node->right);
}

template <class t>
int Tree<t>::depth() // find the depth of the tree
{
    return TreeDepth(root);
}

template <class t>
int Tree<t>::LeavesCount() // find the number of leaves in the tree
{
    return TreeLeavesCount(root);
}

template <class t>
void Tree<t>::print() // print the nodes of the tree in inorder traversal  (left, root, right)
{
    inorder();
}

template <class t>
bool Tree<t>::empty() // check if the tree is empty
{
    return root == NULL;
}

template <class t>
int Tree<t>::size() // return the size of the tree
{
    return siz;
}

template <class t>
void Tree<t>::clear() // clear the tree
{
    root = clearTree(root);
    siz = 0;
}

// -----------------------------Private Methods----------------------------------- Helper Methods

template <class t>
typename Tree<t>::Node *Tree<t>::insertTree(Node *node, t data) // helper method to insert the data into the tree using recursion
{
    if (node == NULL) // if tree is empty
    {
        node = new Node;
        node->data = data;
        node->left = NULL;
        node->right = NULL;
    }
    else if (data < node->data) // if data is less than the current node's data
    {
        node->left = insertTree(node->left, data);
    }
    else if (data > node->data) // if data is greater than the current node's data
    {
        node->right = insertTree(node->right, data);
    }
    return node; // return the node
}

template <class t>
typename Tree<t>::Node *Tree<t>::DeleteFromTree(Node *node, t data) // helper method to delete the data from the tree using recursion
{
    if (root == NULL) // if tree is empty
    {
        return NULL;
    }
    if (data < node->data) // item exists in left sub tree
    {
        node->left = DeleteFromTree(node->left, data);
    }
    else if (data > node->data) // item exists in right sub tree
    {
        node->right = DeleteFromTree(node->right, data);
    }
    else // item is found
    {
        if (node->left == NULL && node->right == NULL) // if node is leaf
        {
            delete node;
            node = NULL;
        }
        else if (node->left == NULL) // if node has only right child
        {
            Node *temp = node;
            node = node->right;
            delete temp;
        }
        else if (node->right == NULL) // if node has only left child
        {
            Node *temp = node;
            node = node->left;
            delete temp;
        }
        else // if node has both left and right child then replace it with minimum of right sub tree
        {
            Node *temp = FindMin(node->right);
            node->data = temp->data;
            node->right = DeleteFromTree(node->right, temp->data);
        }
    }
    return node;
}

template <class t>
typename Tree<t>::Node *Tree<t>::searchRec(Node *node, t data) // helper method to search for the data in the tree using recursion
{
    if (node == NULL) // if tree is empty
    {
        return NULL;
    }
    else if (node->data == data) // if data is found
    {
        return node;
    }
    else if (data < node->data) // if data is less than the current node's data
    {
        return searchRec(node->left, data);
    }
    else // if data is greater than the current node's data
    {
        return searchRec(node->right, data);
    }
}

template <class t>
void Tree<t>::inorderTraversal(Node *node) // helper method to traverse the tree in inorder (left, root, right) using recursion
{
    if (node != NULL)
    {
        inorderTraversal(node->left);
        cout << node->data << " ";
        inorderTraversal(node->right);
    }
}

template <class t>
void Tree<t>::preorderTraversal(Node *node) // helper method to traverse the tree in preorder (root, left, right) using recursion
{

    if (node != NULL)
    {
        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }
}

template <class t>
void Tree<t>::postorderTraversal(Node *node) // helper method to traverse the tree in postorder (left, right, root) using recursion
{
    if (node != NULL)
    {
        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    }
}

template <class t>
int Tree<t>::TreeDepth(Node *node) // helper method to find the depth of the tree using recursion
{

    if (node == NULL)
    {
        return 0;
    }
    else
    {
        int ldepth = TreeDepth(node->left);
        int rdepth = TreeDepth(node->right);
        return (ldepth > rdepth ? ldepth : rdepth) + 1; // return the maximum depth of the left and right sub trees
    }
}

template <class t>
int Tree<t>::TreeLeavesCount(Node *node) // helper method to find the number of leaves in the tree using recursion
{
    if (node == NULL) // if tree is empty
    {
        return 0;
    }
    if (node->left == NULL && node->right == NULL) // if node is leaf
    {
        return 1;
    }
    else // if node is not leaf
    {
        return TreeLeavesCount(node->left) + TreeLeavesCount(node->right);
    }
}

template <class t>
typename Tree<t>::Node *Tree<t>::clearTree(Node *node) // helper method to clear the tree using recursion
{
    if (node != NULL) // if tree is not empty
    {
        clearTree(node->left);
        clearTree(node->right);
        delete node;
    }
    return NULL;
}
