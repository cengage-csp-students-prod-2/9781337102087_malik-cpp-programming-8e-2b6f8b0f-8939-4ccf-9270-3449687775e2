#include <iostream>
#include "addressBookType.h"
#include <fstream>

using namespace std;

void addressBookType::loadData(std::ifstream& infile) {
   string first, last, street, city, state, phone, pStatus, zip;
   int month, day, year;

   infile.open("Ch11_Ex5Data.txt");
   if (!infile) {
       cerr << "File could not be opened!" << endl;
       return;
   }

   while (getline(infile, first, ' ')) { // Read first name
       getline(infile, last); // Read last name

       infile >> month >> day >> year; // Read birthdate
       infile.ignore(); // To skip the newline after reading birthdate

       getline(infile, street);  // Read street
       getline(infile, city);    // Read city
       getline(infile, state);   // Read state
       getline(infile, zip);     // Read zip code

       getline(infile, phone);   // Read phone number
       getline(infile, pStatus); // Read person status (Family, Friend, etc.)

       // Create an extPersonType object and add it to the address book
       extPersonType person(first, last, month, day, year, street, city, state, zip, phone, pStatus);
       addressBook.push_back(person);
   }

   infile.close();
}

void addressBookType::printAll() const {
   for (const auto& person : addressBook) {
       person.print();  // Assuming print is a method in extPersonType that outputs full information
       cout << endl;
   }
}
