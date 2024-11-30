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
    cout << left << setw(15) << "Tax" << "$" << fixed << setprecision(2) << tax << endl;
    cout << left << setw(15) << "Amount Due" << "$" << fixed << setprecision(2) << (total + tax) << endl;
}

int main() {
    vector<MenuItem> menuList;
    getData(menuList);

    showMenu(menuList);

    vector<int> order;
    char choice;
    do {
        cout << "Enter item number: ";
        int itemNumber;
        cin >> itemNumber;

        if (itemNumber < 1 || itemNumber > static_cast<int>(menuList.size())) {
            cout << "Invalid item number. Please try again." << endl;
            continue;
        }

        order.push_back(itemNumber - 1);  // Store index of item

        cout << "Select another item Y/y (Yes), N/n (No): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    cout << endl;
    printCheck(menuList, order);

    return 0;
}
