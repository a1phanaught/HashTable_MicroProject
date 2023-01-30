#ifndef Person_H
#define Person_H

#include <iostream>
#include <string>

using std::string;

class Person {

private:

    // You can add more properties for a person
    int age;
    string gender;

public:
	
    // Do not remove this as we need this for the hash table and name must be public because
    // printList uses pointer to class. I will change this sooner or later.
    string name;

    Person() {
        name = "";
        int age;
        gender = "";
    }

    Person(string newName) {
        name = newName;
        int age = 0;
        gender = "";
    }

    Person(string newName, int newAge) {
        name = newName;
        age = newAge;
        gender = "";
    }

    Person(string newName, int newAge, string setGender) {
        name = newName;
        age = newAge;
        gender = setGender;
    }

    string getName();

};

string Person::getName() { return name; }

#endif
