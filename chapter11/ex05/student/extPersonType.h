#ifndef EXTPERSONTYPE_H
#define EXTPERSONTYPE_H

#include "personType.h"
#include "addressType.h"
#include "dateType.h"
#include <string>

class extPersonType : public personType {
public:
    void setInfo(string fName, string lName, string phone, 
                 string str, string c, string st, string z,
                 int m, int d, int y, string pType);

    void print() const;
    string getPhone() const;
    int getBirthMonth() const;
    string getType() const;

    extPersonType();

private:
    string phoneNumber;
    addressType address;
    dateType dob;
    string personType;
};

#endif
