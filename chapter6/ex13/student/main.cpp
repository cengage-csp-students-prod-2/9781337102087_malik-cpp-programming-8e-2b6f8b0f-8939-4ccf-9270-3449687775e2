#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Function to calculate periodic payment
double calculate_periodic_payment(double L, double r, double m, double t) {
    double i = r / m; // Interest rate per period
    double n = m * t; // Total number of payments
    double denominator = 1 - pow(1 + i, -n); // Denominator of the formula
    return (L * i) / denominator; // Periodic payment formula
}

// Function to calculate unpaid balance
double calculate_unpaid_balance(double L, double r, double m, double t, int k) {
    double i = r / m; // Interest rate per period
    double n = m * t; // Total number of payments
    double R = calculate_periodic_payment(L, r, m, t); // Calculate the periodic payment
    double unpaid_balance = (L * pow(1 + i, k)) - (R * (pow(1 + i, k) - 1) / i); // Unpaid balance formula
    return unpaid_balance;
}

int main() {
    char choice;

    do {
        // Input values
        cout << "Enter (Y/y) to find the periodic payment and unpaid balance after certain payments: ";
        cin >> choice;

        if (choice == 'Y' || choice == 'y') {
            double L, r, m, t;
            int k;

            cout << "Enter the loan amount: ";
            cin >> L;

            cout << "Enter the interest rate per year as a percentage: ";
            cin >> r;
            r /= 100; // Convert percentage to decimal

            cout << "Enter the number of payments per year: ";
            cin >> m;

            cout << "Enter the number of years for the loan: ";
            cin >> t;

            // Calculate the periodic payment
            double R = calculate_periodic_payment(L, r, m, t);
            cout << fixed << setprecision(2);
            cout << "The periodic payment is: " << R << endl;

            // Input the number of payments made
            cout << "Enter the number of payments made: ";
            cin >> k;

            // Calculate the unpaid balance
            double unpaid_balance = calculate_unpaid_balance(L, r, m, t, k);
            cout << "The unpaid balance after " << k << " payment(s) is: " << unpaid_balance << endl;
        }
    } while (choice == 'Y' || choice == 'y');

    cout << "Program terminated." << endl;
    return 0;
}