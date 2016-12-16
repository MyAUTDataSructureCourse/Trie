//
// Created by ahmad on 12/16/16.
//

#ifndef TRIE_TRIE_H
#define TRIE_TRIE_H

#include <string>

#define MAX_ALPH 26
#define nullptr 0

struct TrieNode
{
    bool isWord;
    TrieNode *children[MAX_ALPH];

    TrieNode();
};

class Trie {
private:
    TrieNode *root;
public:
    Trie();

    void add(std::string word);
    bool isExisted(std::string word);

};


#endif //TRIE_TRIE_H
