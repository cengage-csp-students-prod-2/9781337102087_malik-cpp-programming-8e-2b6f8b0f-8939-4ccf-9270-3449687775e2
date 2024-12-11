#ifndef EXT_PERSON_TYPE_H
#define EXT_PERSON_TYPE_H

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

    // Getter functions
    string getPhoneNumber() const;
    string getStatus() const;
    addressType getAddress() const;
    dateType getDob() const;

private:
    addressType address;
    dateType dob;
    string phoneNumber;
    string status;
};

#endif
