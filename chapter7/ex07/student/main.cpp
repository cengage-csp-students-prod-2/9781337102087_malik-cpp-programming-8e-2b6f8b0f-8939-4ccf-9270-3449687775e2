#include <iostream>
using namespace std;

// Function prototypes
void menu();
void addFractions(int, int, int, int, int&, int&);
void subtractFractions(int, int, int, int, int&, int&);
void multiplyFractions(int, int, int, int, int&, int&);
void divideFractions(int, int, int, int, int&, int&);

int main() {
    int choice;
    while (true) {
        menu();
        cout << "Enter your choice (1-4, or 0 to exit): ";
        cin >> choice;

        if (choice == 0) {
            cout << "Exiting program. Goodbye!" << endl;
            break;
        }

        // Ensure a valid choice
        if (choice < 1 || choice > 4) {
            cout << "Invalid choice. Please try again.\n";
            continue;
        }

        int num1, den1, num2, den2, resultNum, resultDen;

        // Input first fraction
        cout << "Enter the numerator and denominator of the first fraction (separated by a space): ";
        cin >> num1 >> den1;

        // Check denominator for validity
        if (den1 == 0) {
            cout << "Denominator cannot be zero. Please try again.\n";
            continue;
        }

        // Input second fraction
        cout << "Enter the numerator and denominator of the second fraction (separated by a space): ";
        cin >> num2 >> den2;

        // Check denominator for validity
        if (den2 == 0) {
            cout << "Denominator cannot be zero. Please try again.\n";
            continue;
        }

        // Perform the operation based on the choice
        switch (choice) {
        case 1: // Addition
            addFractions(num1, den1, num2, den2, resultNum, resultDen);
            cout << num1 << "/" << den1 << " + " << num2 << "/" << den2 
                 << " = " << resultNum << "/" << resultDen << endl;
            break;
        case 2: // Subtraction
            subtractFractions(num1, den1, num2, den2, resultNum, resultDen);
            cout << num1 << "/" << den1 << " - " << num2 << "/" << den2 
                 << " = " << resultNum << "/" << resultDen << endl;
            break;
        case 3: // Multiplication
            multiplyFractions(num1, den1, num2, den2, resultNum, resultDen);
            cout << num1 << "/" << den1 << " * " << num2 << "/" << den2 
                 << " = " << resultNum << "/" << resultDen << endl;
            break;
        case 4: // Division
            if (num2 == 0) {
                cout << "Cannot divide by a fraction with a numerator of zero. Please try again.\n";
            } else {
                divideFractions(num1, den1, num2, den2, resultNum, resultDen);
                cout << num1 << "/" << den1 << " / " << num2 << "/" << den2 
                     << " = " << resultNum << "/" << resultDen << endl;
            }
            break;
        }
        cout << endl;
    }
    return 0;
}

void menu() {
    cout << "\nWelcome to the Fraction Calculator!" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "0. Exit" << endl;
}

// Function to add fractions
void addFractions(int num1, int den1, int num2, int den2, int &resultNum, int &resultDen) {
    resultNum = num1 * den2 + num2 * den1;
    resultDen = den1 * den2;
}

// Function to subtract fractions
void subtractFractions(int num1, int den1, int num2, int den2, int &resultNum, int &resultDen) {
    resultNum = num1 * den2 - num2 * den1;
    resultDen = den1 * den2;
}

// Function to multiply fractions
void multiplyFractions(int num1, int den1, int num2, int den2, int &resultNum, int &resultDen) {
    resultNum = num1 * num2;
    resultDen = den1 * den2;
}

// Function to divide fractions
void divideFractions(int num1, int den1, int num2, int den2, int &resultNum, int &resultDen) {
    resultNum = num1 * den2;
    resultDen = den1 * num2;
}
