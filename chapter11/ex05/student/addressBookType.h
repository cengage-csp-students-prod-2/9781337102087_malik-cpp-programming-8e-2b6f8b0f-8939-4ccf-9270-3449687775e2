#ifndef ADDRESSBOOKTYPE_H
#define ADDRESSBOOKTYPE_H

#include "extPersonType.h"
#include <vector>
using namespace std;

class addressBookType {
public:
    void loadData(string fileName);
    void printAll() const;
    void searchByLastName(string lastName) const;
    void printByMonth(int month) const;

private:
    vector<extPersonType> addressBook;
};

#endif
