#ifndef ROMAN_H
#define ROMAN_H

#include <string>

using namespace std;

class romanType {
public:
    romanType();
    romanType(string roman);
    
    void setRoman(string roman);
    string getRoman() const;
    
    int getInteger() const;

private:
    string roman;
    int integer;
    
    int romanToInteger(string roman);
};

#endif
