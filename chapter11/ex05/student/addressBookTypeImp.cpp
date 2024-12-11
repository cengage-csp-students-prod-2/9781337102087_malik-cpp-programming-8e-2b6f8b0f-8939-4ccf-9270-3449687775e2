#include "addressBookType.h"
#include <fstream>

void addressBookType::saveData(const std::string& filename) const {
    std::ofstream outFile(filename);
    
    if (outFile) {
        for (int i = 0; i < numEntries; ++i) {
            outFile << addressBook[i].getFirstName() << " "
                    << addressBook[i].getLastName() << " "
                    << addressBook[i].getDob().getMonth() << " "
                    << addressBook[i].getDob().getDay() << " "
                    << addressBook[i].getDob().getYear() << " "
                    << addressBook[i].getStreet() << " "
                    << addressBook[i].getCity() << " "
                    << addressBook[i].getState() << " "
                    << addressBook[i].getZip() << " "
                    << addressBook[i].getPhoneNumber() << " "
                    << addressBook[i].getStatus() << std::endl;
        }
    } else {
        std::cerr << "Error opening file!" << std::endl;
    }
}
