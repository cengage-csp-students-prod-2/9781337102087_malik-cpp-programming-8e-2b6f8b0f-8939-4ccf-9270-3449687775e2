#include "addressType.h"

addressType::addressType(string street, string city, string state, string zip)
    : street(street), city(city), state(state), zip(zip) {}

void addressType::setAddress(string street, string city, string state, string zip) {
    this->street = street;
    this->city = city;
    this->state = state;
    this->zip = zip;
}

void addressType::printAddress(ostream& out) const {
    out << street << endl << city << ", " << state << " " << zip << endl;
}

string addressType::getStreet() const {
    return street;
}

string addressType::getCity() const {
    return city;
}

string addressType::getState() const {
    return state;
}

string addressType::getZip() const {
    return zip;
}
