#include <iostream>
#include <string>
#include "roman.h"

using namespace std;

// Constructor with no parameters
romanType::romanType() {
    roman = "";
    integer = 0;
}

// Constructor that accepts a Roman numeral string
romanType::romanType(string romanNumeral) {
    setRoman(romanNumeral);
}

// Function to set the Roman numeral
void romanType::setRoman(string romanNumeral) {
    roman = romanNumeral;
    integer = romanToInteger(romanNumeral);
}

// Function to get the Roman numeral as a string
string romanType::getRoman() const {
    return roman;
}

// Function to get the integer equivalent of the Roman numeral
int romanType::getInteger() const {
    return integer;
}

// Helper function to convert Roman numeral to integer
int romanType::romanToInteger(string romanNumeral) {
    int total = 0;
    int prevValue = 0;
    
    // Roman numeral values mapping
    for (int i = romanNumeral.length() - 1; i >= 0; --i) {
        char ch = romanNumeral[i];
        int value = 0;

        // Check the value of the current Roman numeral character
        switch (ch) {
            case 'M': value = 1000; break;
            case 'D': value = 500; break;
            case 'C': value = 100; break;
            case 'L': value = 50; break;
            case 'X': value = 10; break;
            case 'V': value = 5; break;
            case 'I': value = 1; break;
            default: value = 0; break;
        }

        // If the current value is less than the previous value, subtract it
        if (value < prevValue) {
            total -= value;
        } else {
            total += value;
        }
        
        prevValue = value;
    }
    
    return total;
}
