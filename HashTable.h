#include "LinkedList.h"

class HashTable {

private:

    LinkedList* linkedListArr;
    int arrSize;

public:

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
        linkedListArr[hash].printList();
    }

};
