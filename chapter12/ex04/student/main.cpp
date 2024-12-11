#include "largeIntegers.h"
#include <iostream>

using namespace std;

int main() {
    largeIntegers num1("123456789012345678901234567890");
    largeIntegers num2("987654321098765432109876543210");

    cout << "Number 1: ";
    num1.printValue();

    cout << "Number 2: ";
    num2.printValue();

    // Test addition
    largeIntegers sum = num1.add(num2);
    cout << "Sum: ";
    sum.printValue();

    // Test subtraction
    largeIntegers diff = num2.subtract(num1);
    cout << "Difference: ";
    diff.printValue();

    // Test multiplication
    largeIntegers prod = num1.multiply(num2);
    cout << "Product: ";
    prod.printValue();

    // Test comparison
    cout << "num1 equals num2: " << (num1.equalTo(num2) ? "True" : "False") << endl;
    cout << "num1 > num2: " << (num1.greaterThan(num2) ? "True" : "False") << endl;

    return 0;
}
