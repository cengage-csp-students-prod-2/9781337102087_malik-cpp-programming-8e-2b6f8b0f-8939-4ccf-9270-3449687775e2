#ifndef ADDRESS_TYPE_H
#define ADDRESS_TYPE_H

#include <iostream>
#include <string>

using namespace std;

class addressType {
public:
    addressType(string street = "", string city = "", string state = "", string zip = "");
    void setAddress(string street, string city, string state, string zip);
    void printAddress(ostream& out) const;

    string getStreet() const;
    string getCity() const;
    string getState() const;
    string getZip() const;

private:
    string street;
    string city;
    string state;
    string zip;
};

#endif
