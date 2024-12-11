#ifndef ADDRESS_TYPE_H
#define ADDRESS_TYPE_H

#include <string>
#include <iostream>

using namespace std;

class addressType {
public:
    addressType(string street = "", string city = "", string state = "", string zip = "");
    
    void setAddress(string street, string city, string state, string zip);
    void print() const;

private:
    string street;
    string city;
    string state;
    string zip;
};

#endif

