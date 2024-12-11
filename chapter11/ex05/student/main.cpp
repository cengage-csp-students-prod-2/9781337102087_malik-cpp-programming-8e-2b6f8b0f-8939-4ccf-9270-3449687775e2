#include <iostream>
#include <string>
#include "addressBookType.h"
using namespace std;

int main() {
    addressBookType myAddressBook;

    string fileName;
    cout << "Enter file name: ";
    cin >> fileName;
    myAddressBook.loadData(fileName);

    cout << "\nWelcome to the address book program.\n";
    cout << "Choose among the following options:\n"
         << "1: Search by last name\n"
         << "2: Print a person's info\n"
         << "3: Print birthdays in a month\n"
         << "4: Print names between two last names\n"
         << "5: Print by type (family, friend, business)\n"
         << "6: Print entire address book\n"
         << "9: Terminate the program\n";

    int option;
    cin >> option;

    while (option != 9) {
        string lastName;
        switch (option) {
        case 1:
            cout << "Enter last name: ";
            cin >> lastName;
            myAddressBook.searchByLastName(lastName);
            break;
        case 6:
            myAddressBook.printAll();
            break;
        default:
            cout << "Invalid option!\n";
        }
        cin >> option;
    }

    return 0;
}
