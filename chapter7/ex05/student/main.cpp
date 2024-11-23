#include <iostream>
#include <iomanip> // For setting precision
#include <string>
using namespace std;

// Constants
const double MARRIED_DEDUCTION = 7000.00;
const double SINGLE_DEDUCTION = 4000.00;
const double PERSONAL_EXCEPTION = 1500.00;

// Function to get user data
void getData(char& mStatus, int& nOfChildren, double& gSalary, double& pCToPension) {
    cout << "Enter marital status (m/M for married, s/S for single): ";
    cin >> mStatus;

    if (mStatus == 'm' || mStatus == 'M') {
        cout << "Enter the number of children under 14: ";
        cin >> nOfChildren;
    } else if (mStatus == 's' || mStatus == 'S') {
        nOfChildren = 0;
    } else {
        cout << "Invalid marital status entered!" << endl;
        exit(1);
    }

    cout << "Enter the gross salary for the year: ";
    cin >> gSalary;

    cout << "Enter the percentage of salary contributed to pension (0 to 6 percent): ";
    cin >> pCToPension;

    if (pCToPension < 0 || pCToPension > 6) {
        cout << "Invalid pension contribution percentage!" << endl;
        exit(1);
    }
}

// Function to calculate tax
double taxAmount(char mStatus, int nOfChildren, double gSalary, double pCToPension) {
    double numOfDeductions, standardDeduction, taxableIncome, tax;

    // Determine standard deduction and number of personal exemptions
    if (mStatus == 'm' || mStatus == 'M') {
        numOfDeductions = 2 + nOfChildren; // Spouse + children
        standardDeduction = MARRIED_DEDUCTION;
    } else {
        numOfDeductions = 1; // Single person
        standardDeduction = SINGLE_DEDUCTION;
    }

    // Calculate taxable income
    taxableIncome = gSalary - standardDeduction - (PERSONAL_EXCEPTION * numOfDeductions) - (gSalary * pCToPension / 100);

    if (taxableIncome < 0)
        taxableIncome = 0;

    // Calculate tax based on taxable income
    if (taxableIncome <= 15000) {
        tax = taxableIncome * 0.15;
    } else if (taxableIncome <= 40000) {
        tax = 2250 + (taxableIncome - 15000) * 0.25;
    } else {
        tax = 8460 + (taxableIncome - 40000) * 0.35;
    }

    return tax;
}

int main() {
    char mStatus;
    int nOfChildren = 0;
    double gSalary, pCToPension, tax;

    // Get user input
    getData(mStatus, nOfChildren, gSalary, pCToPension);

    // Calculate tax
    tax = taxAmount(mStatus, nOfChildren, gSalary, pCToPension);

    // Display the result
    cout << fixed << setprecision(2);
    cout << "The total federal tax owed is: $" << tax << endl;

    return 0;
}
