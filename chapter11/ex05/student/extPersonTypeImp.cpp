#include "extPersonType.h"

extPersonType::extPersonType(string first, string last, string street, string city, string state, string zip, string phone, int month, int day, int year, string status)
    : personType(first, last), address(street, city, state, zip), dob(month, day, year) {
    phoneNumber = phone;
    this->status = status;
}

void extPersonType::setPersonInfo(string street, string city, string state, string zip, string phone, int month, int day, int year, string status) {
    address.setAddress(street, city, state, zip);
    dob.setDate(month, day, year);
    phoneNumber = phone;
    this->status = status;
}

void extPersonType::printPersonInfo() const {
    print();
    cout << endl;
    dob.printDate();
    cout << endl;
    cout << "Phone Number: " << phoneNumber << endl;
    cout << "Status: " << status << endl;
    address.print();
}
