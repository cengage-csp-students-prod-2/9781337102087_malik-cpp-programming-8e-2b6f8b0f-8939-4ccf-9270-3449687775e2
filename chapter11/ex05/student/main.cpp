#include <iostream>
#include <string>
#include "addressBookType.h"

using namespace std;

int main() {
    addressBookType addressBook;
    string filename = "Ch11_Ex5Data.txt";

    addressBook.loadData(filename);

    int option;
    do {
        cout << "Choose among the following options:\n";
        cout << "1: To see if a person is in the address book\n";
        cout << "2: Print the information of a person\n";
        cout << "3: Print the names of people having birthday in a particular month\n";
        cout << "4: Print the names of people between two last names\n";
        cout << "5: Print the names of people having a particular status\n";
        cout << "6: Print the entire address book\n";
        cout << "7: Save data\n";
        cout << "9: Terminate the program\n";

        cin >> option;

        switch(option) {
            case 1:
                // Search by last name
                break;
            case 2:
                // Print info of a person
                break;
            case 3:
                // Print names for a given month
                break;
            case 4:
                // Print names in a range
                break;
            case 5:
                // Print names with specific status
                break;
            case 6:
                addressBook.printAll();
                break;
            case 7:
                addressBook.saveData("Ch11_Ex5Out.txt");
                break;
        }
    } while (option != 9);

    return 0;
}
