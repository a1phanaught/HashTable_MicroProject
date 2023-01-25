#include <iostream>
#include "HashTable.h"
#include "LinkedList.h"

using std::cout; using std::string;

int main() {

	HashTable *hashTable = new HashTable(100);

	hashTable->insertToHashTable("Ada");
	
	hashTable->insertToHashTable("adA");
	LinkedList *linkedList =  new LinkedList();
	*linkedList = hashTable->getFromHashTable("adA");

	(*linkedList).printList();

	return 0;
}