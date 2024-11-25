#include <iostream>
#include <string>
using namespace std;

// Function to mask the digits of a Social Security number and remove dashes
string maskSSN(const string& ssn) {
    string maskedSSN;
    for (size_t i = 0; i < ssn.length(); i++) {
        if (isdigit(ssn.at(i))) {
            maskedSSN.append(1, 'x'); // Replace digit with 'x'
        }
    }
    return maskedSSN;
}

// Function to mask all characters of the password
string maskPassword(const string& password) {
    string maskedPassword;
    for (size_t i = 0; i < password.length(); i++) {
        maskedPassword.append(1, 'x'); // Replace character with 'x'
    }
    return maskedPassword;
}

int main() {
    string name, ssn, userID, password;

    // Read input
    cout << "Enter the student's name: ";
    getline(cin, name);
    cout << "Enter the Social Security number (in the format 000-00-0000): ";
    cin >> ssn;
    cout << "Enter the user ID: ";
    cin >> userID;
    cout << "Enter the password: ";
    cin >> password;

    // Process the SSN and password
    string maskedSSN = maskSSN(ssn); // Mask SSN digits
    string maskedPassword = maskPassword(password); // Mask password characters

    // Output the result
    cout << "\nProcessed Information:" << endl;
    cout << "Name: " << name << endl;
    cout << "Social Security Number: " << maskedSSN << endl;
    cout << "User ID: " << userID << endl;
    cout << "Password: " << maskedPassword << endl;

    return 0;
}
