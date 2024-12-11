#include "extPersonType.h"
#include <iostream>

using namespace std;

extPersonType::extPersonType(string first, string last, string street, string city, string state, string zip, string phone, int month, int day, int year, string status)
    : personType(first, last), address(street, city, state, zip), dob(month, day, year), phoneNumber(phone), status(status) {}

void extPersonType::setPersonInfo(string street, string city, string state, string zip, string phone, int month, int day, int year, string status) {
    address.setAddress(street, city, state, zip);
    dob.setDate(month, day, year);
    phoneNumber = phone;
    status = status;
}

void extPersonType::printPersonInfo() const {
    print();
    dob.printDate();
    cout << endl;
    address.printAddress(cout);
    cout << phoneNumber << " " << status << endl;
}

string extPersonType::getPhoneNumber() const {
    return phoneNumber;
}

string extPersonType::getStatus() const {
    return status;
}

addressType extPersonType::getAddress() const {
    return address;
}

dateType extPersonType::getDob() const {
    return dob;
}
