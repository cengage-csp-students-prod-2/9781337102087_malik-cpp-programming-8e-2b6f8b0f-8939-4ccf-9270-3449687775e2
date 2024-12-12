#include <iostream>
#include "extPersonType.h"

using namespace std;

extPersonType::extPersonType(string first, string last, int month, int day, int year,
                            string street, string city, string state, string zip,
                            string phone, string status)
   : personType(first, last), street(street), city(city), state(state), zip(zip), phone(phone), pStatus(status) {
   birthDate.setDate(month, day, year);  // Set birth date using dateType
}

void extPersonType::setInfo(int month, int day, int year, string street, string city, string state,
                           string zip, string phone, string status) {
   birthDate.setDate(month, day, year);
   this->street = street;
   this->city = city;
   this->state = state;
   this->zip = zip;
   this->phone = phone;
   this->pStatus = status;
}

void extPersonType::print() const {
   personType::print();  // Print name with newline
   cout << "Date of Birth: " << birthDate.getMonth() << "-"
        << birthDate.getDay() << "-" << birthDate.getYear() << endl;
   cout << "Address: " << street << ", " << city << ", " << state << " - " << zip << endl;
   cout << "Phone Number: " << phone << endl;
   cout << "Person Type: " << pStatus << endl;
}
