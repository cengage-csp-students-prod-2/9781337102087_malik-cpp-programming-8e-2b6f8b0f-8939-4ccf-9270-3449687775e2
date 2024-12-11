#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
const int NO_OF_ITEMS = 8;
struct menuItemType {
    string menuItem;
    double menuPrice;
};
void getData(ifstream& inFile, menuItemType mList[], int listSize);
void showMenu(menuItemType mList[], int listSize);
bool isItemSelected(int cList[], int cListLength, int itemNo);
void makeSelection(int listSize, int cList[], int& cListLength);
void printCheck(menuItemType mList[], int listSize, int cList[], int cListLength);

int main() {
    menuItemType menuList[NO_OF_ITEMS];  
    int choiceList[NO_OF_ITEMS];        
    int choiceListLength = 0;            
    ifstream inFile;  
        cout << fixed << showpoint << setprecision(2);
    menuList[0] = {"Plain Egg", 1.45};
    menuList[1] = {"Bacon and Egg", 2.45};
    menuList[2] = {"Muffin", 0.99};
    menuList[3] = {"French Toast", 1.99};
    menuList[4] = {"Fruit Basket", 2.49};
    menuList[5] = {"Cereal", 0.69};
    menuList[6] = {"Coffee", 0.50};
    menuList[7] = {"Tea", 0.75};
    showMenu(menuList, NO_OF_ITEMS);
    makeSelection(NO_OF_ITEMS, choiceList, choiceListLength);
    printCheck(menuList, NO_OF_ITEMS, choiceList, choiceListLength);

    return 0;
}
void getData(ifstream& inFile, menuItemType mList[], int listSize) {
    string item;
    double price;
        for (int i = 0; i < listSize; ++i) {
        inFile >> item >> price;
        mList[i].menuItem = item;
        mList[i].menuPrice = price;
    }
}
void showMenu(menuItemType mList[], int listSize) {
    cout << "Welcome to Johnny's Restaurant" << endl;
    cout << "----Today's Menu----" << endl;
    for (int i = 0; i < listSize; ++i) {
        cout << i + 1 << ": " << left << setw(15) << mList[i].menuItem << "$" << mList[i].menuPrice << endl;
    }
    cout << endl;
    cout << "You can make up to 8 single order selections" << endl;
}
bool isItemSelected(int cList[], int cListLength, int itemNo) {
    for (int i = 0; i < cListLength; ++i) {
        if (cList[i] == itemNo) {
            return true;
        }
    }
    return false;
}
void makeSelection(int listSize, int cList[], int& cListLength) {
    char selection;
    int itemNo;
    do {
        cout << "Do you want to make selection Y/y (Yes), N/n (No): ";
        cin >> selection;
        if (selection == 'Y' || selection == 'y') {
            cout << "Enter item number: ";
            cin >> itemNo;
            if (itemNo >= 1 && itemNo <= listSize) {
                if (!isItemSelected(cList, cListLength, itemNo)) {
                    cList[cListLength] = itemNo;
                    cListLength++;
                } else {
                    cout << "You already selected this item!" << endl;
                }
            } else {
                cout << "Invalid item number. Try again." << endl;
            }
        }
    } while (selection == 'Y' || selection == 'y');
}
void printCheck(menuItemType mList[], int listSize, int cList[], int cListLength) {
    double total = 0;
    cout << "Welcome to Johnny's Restaurant" << endl;
    for (int i = 0; i < cListLength; ++i) {
        int itemNo = cList[i];
        cout << left << setw(15) << mList[itemNo - 1].menuItem << "$" << mList[itemNo - 1].menuPrice << endl;
        total += mList[itemNo - 1].menuPrice;
    }
    double tax = total * 0.05;
    double amountDue = total + tax;
    cout << "Tax             $" << tax << endl;
    cout << "Amount Due      $" << amountDue << endl;
}