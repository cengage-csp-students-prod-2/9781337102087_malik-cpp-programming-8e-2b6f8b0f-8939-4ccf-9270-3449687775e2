#ifndef ADDRESS_BOOK_TYPE_H
#define ADDRESS_BOOK_TYPE_H

#include "extPersonType.h"
#include <string>

const int MAX_ENTRIES = 500;

class addressBookType {
public:
    addressBookType();

    void loadData(const string& filename);
    void saveData(const string& filename) const;
    void sortAddressBook();
    void searchByLastName(const string& lastName) const;
    void printPersonInfo(const string& lastName) const;
    void printBirthdayMonth(int month) const;
    void printRangeOfNames(const string& startLastName, const string& endLastName) const;
    void printStatus(const string& status) const;
    void printAll() const;

private:
    extPersonType addressBook[MAX_ENTRIES];
    int numEntries;
};

#endif
