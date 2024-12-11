#include "extPersonType.h"
#include <iostream>
using namespace std;

extPersonType::extPersonType() : personType("",""), phoneNumber(""), personType("") {}

void extPersonType::setInfo(string fName, string lName, string phone, 
                            string str, string c, string st, string z, 
                            int m, int d, int y, string pType) {
    setName(fName, lName);
    phoneNumber = phone;
    address.setAddress(str, c, st, z);
    dob.setDate(m, d, y);
    personType = pType;
}

void extPersonType::print() const {
    cout << firstName << " " << lastName << endl;
    cout << "Date of Birth: ";
    dob.print();
    cout << "\nPhone Number: " << phoneNumber << endl;
    cout << "Person Type: " << personType << endl;
    address.print();
}

string extPersonType::getPhone() const {
    return phoneNumber;
}

int extPersonType::getBirthMonth() const {
    return dob.getMonth();
}

string extPersonType::getType() const {
    return personType;
}
