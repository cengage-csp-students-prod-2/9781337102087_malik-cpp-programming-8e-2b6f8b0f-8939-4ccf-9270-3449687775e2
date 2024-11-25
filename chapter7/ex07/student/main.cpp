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
    do {
        menu();
        cout << "Enter your choice (1-4, or 0 to exit): ";
        cin >> choice;

        if (choice == 0) {
            cout << "Exiting program. Goodbye!" << endl;
            break;
        }

        int num1, den1, num2, den2, resultNum, resultDen;

        // Input fractions
        cout << "Enter the numerator and denominator of the first fraction: ";
        cin >> num1 >> den1;
        cout << "Enter the numerator and denominator of the second fraction: ";
        cin >> num2 >> den2;

        if (den1 == 0 || den2 == 0) {
            cout << "Denominator cannot be zero. Please try again.\n";
            continue;
        }

        // Perform operation based on user choice
        switch (choice) {
        case 1:
            addFractions(num1, den1, num2, den2, resultNum, resultDen);
            cout << num1 << "/" << den1 << " + " << num2 << "/" << den2 
                 << " = " << resultNum << "/" << resultDen << endl;
            break;
        case 2:
            subtractFractions(num1, den1, num2, den2, resultNum, resultDen);
            cout << num1 << "/" << den1 << " - " << num2 << "/" << den2 
                 << " = " << resultNum << "/" << resultDen << endl;
            break;
        case 3:
            multiplyFractions(num1, den1, num2, den2, resultNum, resultDen);
            cout << num1 << "/" << den1 << " * " << num2 << "/" << den2 
                 << " = " << resultNum << "/" << resultDen << endl;
            break;
        case 4:
            divideFractions(num1, den1, num2, den2, resultNum, resultDen);
            cout << num1 << "/" << den1 << " / " << num2 << "/" << den2 
                 << " = " << resultNum << "/" << resultDen << endl;
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }

        cout << endl;
    } while (true);

    return 0;
}

void menu() {
    cout << "Welcome to the Fraction Calculator!" << endl;
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
