// addressTypeImp.cpp
#include "addressType.h"

addressType::addressType(string street, string city, string state, string zip)
    : streetAddress(street), city(city), state(state), zipCode(zip) {}

void addressType::setAddress(string street, string city, string state, string zip) {
    streetAddress = street;
    city = city;
    state = state;
    zipCode = zip;
}

void addressType::printAddress() const {
    cout << streetAddress << "\n" << city << ", " << state << " - " << zipCode << endl;
}