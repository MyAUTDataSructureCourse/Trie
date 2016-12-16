//
// Created by ahmad on 12/16/16.
//

#include "Trie.h"
#include <algorithm>

TrieNode::TrieNode()
{
    for (int i = 0; i < MAX_ALPH; ++i) {
        children[i] = nullptr;
    }

    isWord = false;
}

Trie::Trie()
{
    this->root = new TrieNode;
}

void Trie::add(std::string word)
{
    // Making to the lower case
    std::transform(word.begin(), word.end(), word.begin(), ::tolower);

    TrieNode *pointer = this->root;

    int childIndex;

    for (int i = 0; i < word.size(); ++i) {
        childIndex = word.at(i) - 'a';
        if(!pointer->children[childIndex])
            pointer->children[childIndex] = new TrieNode;
        pointer = pointer->children[childIndex];
    }

    pointer->isWord = true;
}

bool Trie::isExisted(std::string word)
{
    // Making to the lower case
    std::transform(word.begin(), word.end(), word.begin(), ::tolower);

    TrieNode *pointer = this->root;

    int childIndex;

    for (int i = 0; i < word.size(); ++i) {
        childIndex = word.at(i) - 'a';
        if(pointer->children[childIndex])
            pointer = pointer->children[childIndex];
        else
            return false;
    }

    return pointer->isWord;
}