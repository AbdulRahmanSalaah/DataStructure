#include <bits/stdc++.h>
using namespace std;

#ifndef TRIE_H
#define TRIE_H

#pragma once

class Trie
{

private:
    struct Node
    {
        char c;
        bool isEndOfWord;
        Node *children[26];
        Node(char c)
        {
            this->c = c;
            isEndOfWord = false;
            memset(children, 0, sizeof(children));
        }
    };
    Node *root;
    Node *getNode(string word);

public:
    Trie();
    ~Trie();

    void insert(string key);
    bool search(string key);
    void remove(string key);
    bool startsWith(string prefix);
};
#include "Trie.cpp"

#endif