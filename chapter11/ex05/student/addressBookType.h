#ifndef ADDRESS_BOOK_TYPE_H
#define ADDRESS_BOOK_TYPE_H

#include "extPersonType.h"  // Include the header for extPersonType

class addressBookType {
public:
    addressBookType();  // Constructor declaration
    void loadData(const std::string& filename);
    void printAll() const;
    void saveData(const std::string& filename) const;  // Declare saveData method

private:
    extPersonType* addressBook;  // Pointer to store the address book entries
    int numEntries;
};

#endif
