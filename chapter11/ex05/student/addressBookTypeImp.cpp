#include "addressBookType.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <cstring>

using namespace std;

addressBookType::addressBookType() : numEntries(0) {}

void addressBookType::loadData(const string& filename) {
    ifstream inFile(filename);

    if (inFile) {
        string firstName, lastName, street, city, state, zip, phone, status;
        int month, day, year;
        while (inFile >> firstName >> lastName >> month >> day >> year >> street >> city >> state >> zip >> phone >> status) {
            addressBook[numEntries].setPersonInfo(street, city, state, zip, phone, month, day, year, status);
            numEntries++;
        }
    }
}

void addressBookType::saveData(const string& filename) const {
    ofstream outFile(filename);

    if (outFile) {
        for (int i = 0; i < numEntries; ++i) {
            outFile << addressBook[i].getFirstName() << " " << addressBook[i].getLastName() << " ";
            outFile << addressBook[i].getDob().getMonth() << " " << addressBook[i].getDob().getDay() << " " << addressBook[i].getDob().getYear() << " ";
            addressBook[i].getAddress().printAddress(outFile);
            outFile << addressBook[i].getPhoneNumber() << " " << addressBook[i].getStatus() << endl;
        }
    }
}

// Add other methods like sortAddressBook, printPersonInfo, searchByLastName, etc.
