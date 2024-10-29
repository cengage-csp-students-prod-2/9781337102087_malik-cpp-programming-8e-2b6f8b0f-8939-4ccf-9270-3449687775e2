#include <iostream>
#include <fstream>
#include <string>
#include "addressBookType.h"

using namespace std; 
 
void loadAddressBook(addressBookType& adBook, bool& flag);
void showMenu();

int main()
{
    addressBookType addressBook;
    string str;
    string str1;
    string str2; 
    int choice;
    int loc;
    int month;

    bool flag = false;

    loadAddressBook(addressBook, flag);

    if (flag)
    {
        cout << "Input file does not exist." << endl
             << "Program terminates!!!!" << endl;
        return 1;
    }

    addressBook.sort();

    showMenu();

    cin >> choice;
    cin.ignore(100, '\n');

    while (choice != 9)
    {
        switch (choice)
        {
        case 1: 
            cout << "Enter the last name of the person: ";
            getline(cin , str);
            cout << endl;

            loc = addressBook.search(str);

            if (loc != -1)
	            cout << str << " is in the address book" << endl;
            else
                cout << str << " is not in the address book" << endl;
            break;
        case 2: 
            cout << "Enter the last name of the person: ";
            getline(cin , str);
            cout << endl;

            loc = addressBook.search(str);

            if (loc != -1)
                addressBook.printAt(loc);
            else
                cout << str << " is not in the address book" << endl;
            break;
        case 3: 
            cout << "Enter the month number: ";
            cin >> month;
            cin.ignore(100, '\n');
            cout << endl;

            addressBook.printNameInTheMonth(month);
            break;
        case 4: 
            cout << "Enter starting last name: ";
            getline(cin , str1);
            cout << endl;
            cout << "Enter ending last name: ";
            getline(cin , str2);
            cout << endl;

            addressBook.printNamesBetweenLastNames(str1, str2);
            break;
		case 5: 
            cout << "Enter person type Family, Friend, Business: ";
            getline(cin , str);
            cout << endl;

            addressBook.printNamesWithStatus(str);
            break;
        case 6: 
            addressBook.print();
            break;
        default: 
            cout << "Invalid choice" << endl;
        }

        showMenu();
        cin >> choice;
        cin.ignore(100, '\n');
    }

    return 0;
}

void loadAddressBook(addressBookType& adBook, bool& flag)
{
    ifstream infile;

    char filename[50];
	
    string first;
    string last;

    int month;
    int day;
    int year;

    string street;
    string city;
    string state;
    string zip;

    string phone;
    string pStatus;

    extPersonType temp;

    cout << "Enter file name: ";
    cin >> filename;
    cout << endl;

    infile.open(filename);
    if (!infile)
    {
        cout << "Input file does not exists. "
			 << "Program terminates!!!" << endl;
        flag = true;
        return;
    }

    int i = 0;

    infile >> first >> last >> month >> day >> year;
    infile.ignore(100,'\n');
    getline(infile,street);
    getline(infile,city);
    getline(infile, state);
    infile >> zip >> phone >> pStatus;

    while (infile)
    {
        temp.setInfo(first, last, month, day, year, street, city, 
                     state, zip, phone, pStatus);

        adBook.insertAt(temp, i);
        i++;

        infile >> first >> last >> month >> day >> year;	
        infile.ignore(100, '\n');
        getline(infile, street);
        getline(infile, city);
        getline(infile, state);
        infile >> zip >> phone >> pStatus;
    }
}

void showMenu()
{
    cout << "Welcome to the address book program." << endl;
    cout << "Choose among the following options:" << endl;
    cout << "1: To see if a person is in the address book"
         << endl;
    cout << "2: Print the information of a person" << endl;
    cout << "3: Print the names of person having birthday in " 
         << "a particular month" << endl;
    cout << "4: Print the names of persons between two " 
         << "last names" << endl;
    cout << "5: Print the names of persons having a "
         << "particular status" << endl;
    cout << "6: Print the address book" << endl;
    cout << "9: Terminate the program" << endl;
}