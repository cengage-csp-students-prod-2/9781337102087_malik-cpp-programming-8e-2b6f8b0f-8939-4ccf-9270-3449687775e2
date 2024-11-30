#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct MenuItem {
    string name;
    double price;
};

// Function to load menu data from file
void getData(vector<MenuItem>& menuList) {
    ifstream infile("Ch9_Ex4Data.txt");
    if (!infile) {
        cerr << "Error opening file!" << endl;
        exit(1);
    }

    string itemName;
    double itemPrice;
    while (getline(infile, itemName)) {
        infile >> itemPrice;
        infile.ignore();  // Ignore the newline character after price
        menuList.push_back({itemName, itemPrice});
    }

    infile.close();
}

// Function to display the menu
void showMenu(const vector<MenuItem>& menuList) {
    cout << "Welcome to Johnny's Restaurant" << endl;
    cout << "----Today's Menu----" << endl;

    for (size_t i = 0; i < menuList.size(); ++i) {
        cout << i + 1 << ": " << left << setw(15) << menuList[i].name
             << "$" << fixed << setprecision(2) << menuList[i].price << endl;
    }

    cout << endl;
}

// Function to calculate and print the bill
void printCheck(const vector<MenuItem>& menuList, const vector<int>& order) {
    double total = 0.0;

    cout << "Welcome to Johnny's Restaurant" << endl;
    for (int index : order) {
        cout << left << setw(15) << menuList[index].name
             << "$" << fixed << setprecision(2) << menuList[index].price << endl;
        total += menuList[index].price;
    }

    double tax = total * 0.05;
    double amountDue = total + tax;

    // Properly formatted output for tax and total amount due
    cout << left << setw(15) << "Tax" << "$" << fixed << setprecision(2) << tax << endl;
    cout << left << setw(15) << "Amount Due" << "$" << fixed << setprecision(2) << amountDue << endl;
}

int main() {
    vector<MenuItem> menuList;
    getData(menuList);

    showMenu(menuList);

    vector<int> order;
    char choice;
    int itemNumber;

    // Loop until valid items are chosen
    while (true) {
        cout << "Enter item number (1-8): ";
        cin >> itemNumber;

        // Validate the input to ensure it is a valid menu item number
        if (itemNumber >= 1 && itemNumber <= 8) {
            order.push_back(itemNumber - 1);  // Store index of item
        } else {
            cout << "Invalid item number. Please try again." << endl;
            continue;
        }

        cout << "Select another item Y/y (Yes), N/n (No): ";
        cin >> choice;

        // Exit loop if user does not want to select more items
        if (choice == 'N' || choice == 'n') {
            break;
        }
    }

    cout << endl;
    printCheck(menuList, order);

    return 0;
}
