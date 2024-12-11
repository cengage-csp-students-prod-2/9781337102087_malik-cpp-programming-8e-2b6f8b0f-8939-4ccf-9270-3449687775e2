#include "addressType.h"

addressType::addressType(string street, string city, string state, string zip) {
    setAddress(street, city, state, zip);
}

void addressType::setAddress(string street, string city, string state, string zip) {
    this->street = street;
    this->city = city;
    this->state = state;
    this->zip = zip;
}

void addressType::print() const {
    cout << street << endl;
    cout << city << ", " << state << " - " << zip << endl;
}
