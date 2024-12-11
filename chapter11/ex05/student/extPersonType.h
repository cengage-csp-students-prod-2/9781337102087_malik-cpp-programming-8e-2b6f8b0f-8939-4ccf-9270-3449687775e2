#ifndef EXTPERSON_TYPE_H
#define EXTPERSON_TYPE_H

#include "personType.h"
#include "addressType.h"
#include "dateType.h"
#include <string>

using namespace std;

class extPersonType : public personType {
public:
    extPersonType(string first = "", string last = "", string street = "", string city = "", string state = "", string zip = "", string phone = "", int month = 1, int day = 1, int year = 1900, string status = "");

    void setPersonInfo(string street, string city, string state, string zip, string phone, int month, int day, int year, string status);
    void printPersonInfo() const;

private:
    addressType address;
    dateType dob;
    string phoneNumber;
    string status;  // Family, Friend, or Business
};

#endif
