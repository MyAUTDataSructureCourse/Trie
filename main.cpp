#include <iostream>
#include "Trie.h"

using namespace std;

int main() {

    Trie trie;
    trie.add("hello");
    trie.add("goodbye");
    trie.add("congratulation");
    trie.add("congratulations");

    trie.add("me");
    trie.add("that");
    trie.add("apple");
    trie.add("ths");


    cout << trie.isExisted("this") << endl;
    cout << trie.isExisted("those") << endl;
    cout << trie.isExisted("hello") << endl;
    cout << trie.isExisted("hellooo") << endl;
    cout << endl;
    cout << trie.isExisted("goodbye") << endl;
    cout << trie.isExisted("hello") << endl;
    cout << trie.isExisted("ths") << endl;
    cout << trie.isExisted("that") << endl;
    cout << trie.isExisted("me") << endl;
    cout << trie.isExisted("apple") << endl;
    cout << trie.isExisted("congrtultion") << endl;
    return 0;
}