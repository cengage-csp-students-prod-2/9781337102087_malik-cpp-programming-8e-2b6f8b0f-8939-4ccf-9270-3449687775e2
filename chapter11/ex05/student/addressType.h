// addressType.h
#ifndef ADDRESSTYPE_H
#define ADDRESSTYPE_H

#include <string>
#include <iostream>
using namespace std;

class addressType {
public:
    addressType(string street = "", string city = "", string state = "", string zip = "");
    void setAddress(string street, string city, string state, string zip);
    void printAddress() const;
private:
    string streetAddress;
    string city;
    string state;
    string zipCode;
};

#endif
