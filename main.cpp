#include <iostream>
#include "HashTable.h"
#include "LinkedList.h"
#include "Person.h"

using std::cout; using std::string;

int main() {

	HashTable *hashTable = new HashTable();
	LinkedList *linkedList = new LinkedList();
	Person *firstPerson = new Person("Ada");

	hashTable->insertToHashTable(*firstPerson);
	*linkedList = hashTable->getFromHashTable(*firstPerson);

	(*linkedList).printList();

	return 0;
}
