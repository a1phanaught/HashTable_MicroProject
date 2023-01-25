#ifndef HashTable_h
#define HashTable_h
#include <iostream>
#include "LinkedList.h"

using std::cout; using std::endl;

class HashTable {

private:

    LinkedList *linkedListArr;
    int arrSize;

public:

    // unspecified size of hash table defaults to 50;
    HashTable () {
        arrSize = 50;
        linkedListArr = (LinkedList*)calloc(arrSize, sizeof(LinkedList));
    }

    HashTable (int arrSz) {
        arrSize = arrSz;
        linkedListArr = (LinkedList*)calloc(arrSize, sizeof(LinkedList));
    }

    int getHash(const string &str) {
        int hash = 0;
        for (auto chr : str) hash += chr;
        return hash % arrSize;
    }

    void insertToHashTable(string str) {
        int hash = getHash(str);
        (*(linkedListArr+hash)).insertNode(str);
    }

    LinkedList getFromHashTable(string str) {
        int hash = getHash(str);
        return (*(linkedListArr+hash));
    }

};

#endif