#include <iostream>
#include "addressType.h"

void addressType::setAddress(std::string street, std::string city, std::string state, std::string zip) {
   this->street = street;
   this->city = city;
   this->state = state;
   this->zip = zip;
}

std::string addressType::getStreet() const {
   return street;
}

std::string addressType::getCity() const {
   return city;
}

std::string addressType::getState() const {
   return state;
}

std::string addressType::getZip() const {
   return zip;
}
