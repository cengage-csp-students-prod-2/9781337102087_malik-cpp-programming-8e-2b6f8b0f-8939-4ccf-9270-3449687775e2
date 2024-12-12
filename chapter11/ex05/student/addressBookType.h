#ifndef ADDRESS_BOOK_H
#define ADDRESS_BOOK_H

#include "extPersonType.h"
#include <vector>
#include <fstream>

class addressBookType {
public:
   void loadData(std::ifstream& infile);
   void printAll() const;

private:
   std::vector<extPersonType> addressBook; // Vector to store the contacts
};

#endif 