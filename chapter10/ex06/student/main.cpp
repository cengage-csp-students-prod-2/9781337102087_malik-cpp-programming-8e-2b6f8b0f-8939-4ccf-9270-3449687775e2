#include <iostream>
#include <string>
#include "roman.h"

using namespace std;

int main() {
    string romanNumeral;
    cout << "Enter a Roman numeral: ";
    cin >> romanNumeral;

    romanType roman(romanNumeral);
    
    cout << "Roman numeral: " << roman.getRoman() << endl;
    cout << "Integer equivalent: " << roman.getInteger() << endl;
    
    return 0;
}
