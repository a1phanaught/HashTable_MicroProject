#ifndef Person_H
#define Person_H

#include <iostream>
#include <string>

using std::string;

class Person {

private:

public:
	
	string name;
    int age;
    string gender;

    Person() {
        this->name = "";
        int age;
        gender = "";
    }

    Person(string name) {
        this->name = name;
        int age = 0;
        gender = "";
    }

    Person(string name, int age) {
        this->name = name;
        this->age = age;
        gender = "";
    }

    Person(string name, int age, string gender) {
        this->name = name;
        this->age = age;
        this->gender = gender;
    }

    string getName();

};

string Person::getName() { return name; }

#endif
