#include "addressBookType.h"
#include <iostream>
#include <fstream>

using namespace std;

void addressBookType::saveData(const string& filename) const {
    ofstream outFile(filename);

    if (outFile) {
        for (int i = 0; i < numEntries; ++i) {
            outFile << addressBook[i].getFirstName() << " " << addressBook[i].getLastName() << " ";
            
            // Access dob using getDob
            outFile << addressBook[i].getDob().getMonth() << " "
                    << addressBook[i].getDob().getDay() << " "
                    << addressBook[i].getDob().getYear() << " ";
            
            // Access address using getAddress
            outFile << addressBook[i].getAddress().getStreet() << " "
                    << addressBook[i].getAddress().getCity() << " "
                    << addressBook[i].getAddress().getState() << " "
                    << addressBook[i].getAddress().getZip() << " ";
            
            // Access phone number and status using their respective getters
            outFile << addressBook[i].getPhoneNumber() << " "
                    << addressBook[i].getStatus() << endl;
        }
    }
}
