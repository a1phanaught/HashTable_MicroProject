#include <iostream>
#include "HashTable.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using std::cout; using std::string;

int main() {

	HashTable *hashTable = new HashTable(100);

	hashTable->insertToHashTable("Ada");

	return 0;
}
