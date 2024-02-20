#include "Trie.h"

typename Trie::Node *Trie::getNode(string word)
{

    Node *cur = root;
    for (int i = 0; i < word.length(); i++)
    {
        int index = word[i] - 'a';
        if (cur->children[index] == nullptr)
        {
            return nullptr;
        }
        cur = cur->children[index];
    }

    return cur;
}

Trie::Trie()
{
    root = new Node(' '); // root node is empty character
}

Trie::~Trie()
{
}

void Trie::insert(string key)
{
    Node *cur = root;                      // start from root node
    for (int i = 0; i < key.length(); i++) // iterate through each character of the key
    {
        int index = key[i] - 'a';            // get the index of the character
        if (cur->children[index] == nullptr) // if the character is not present in the trie
        {
            cur->children[index] = new Node(key[i]); // create a new node for the character
        }
        cur = cur->children[index]; // move to the next node
    }

    cur->isEndOfWord = true; // mark the end of the word
}

bool Trie::search(string key)
{
    Node *node = getNode(key);
    return node != nullptr && node->isEndOfWord;
}

void Trie::remove(string key)
{
    Node *node = getNode(key);
    if (node != nullptr)
    {
        node->isEndOfWord = false;
    }
}

bool Trie::startsWith(string prefix)
{
    Node *node = getNode(prefix);
    return node != nullptr;
}
