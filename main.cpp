#include <iostream>
#include <conio.h>
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
	
	cout << endl << "Press any key to continue..." << endl;
	getch();

	return 0;
}
