#ifndef H_largeIntegers
#define H_largeIntegers

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class largeIntegers {
private:
    std::vector<int> digits; // to store the digits of the large integer

public:
    largeIntegers(); // Default constructor
    largeIntegers(const std::string& number); // Constructor to initialize from string
    largeIntegers(const largeIntegers& other); // Copy constructor
    ~largeIntegers(); // Destructor

    void setValue(const std::string& number); // Set value from string
    std::string getValue() const; // Get value as a string
    void printValue() const; // Print value
    
    // Arithmetic operations
    largeIntegers add(const largeIntegers& other) const;
    largeIntegers subtract(const largeIntegers& other) const;
    largeIntegers multiply(const largeIntegers& other) const;
    
    // Comparison operations
    bool equalTo(const largeIntegers& other) const;
    bool notEqualTo(const largeIntegers& other) const;
    bool greaterThan(const largeIntegers& other) const;
    bool lessThan(const largeIntegers& other) const;
    bool greaterOrEqual(const largeIntegers& other) const;
    bool lessOrEqual(const largeIntegers& other) const;

    // Helper function to remove leading zeros
    void removeLeadingZeros();
};

#endif
