#ifndef PERSON_TYPE_H
#define PERSON_TYPE_H

#include <string>
using namespace std;

class personType {
public:
    void print() const;
    void setName(string first, string last);
    string getFirstName() const;
    string getLastName() const;
    personType(string first = "", string last = "");

private:
    string firstName;
    string lastName;
};

#endif
