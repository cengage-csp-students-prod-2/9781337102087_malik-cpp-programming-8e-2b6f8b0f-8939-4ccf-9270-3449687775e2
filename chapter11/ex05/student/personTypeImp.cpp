#include "personType.h"

personType::personType(string first, string last) {
    setName(first, last);
}

void personType::setName(string first, string last) {
    firstName = first;
    lastName = last;
}

void personType::print() const {
    cout << firstName << " " << lastName;
}

string personType::getFirstName() const {
    return firstName;
}

string personType::getLastName() const {
    return lastName;
}
#ifndef PERSON_TYPE_H
#define PERSON_TYPE_H

#include <string>
#include <iostream>

using namespace std;

class personType {
public:
    personType(string first = "", string last = "");

    void setName(string first, string last);
    void print() const;
    string getFirstName() const;
    string getLastName() const;

private:
    string firstName;
    string lastName;
};

#endif
