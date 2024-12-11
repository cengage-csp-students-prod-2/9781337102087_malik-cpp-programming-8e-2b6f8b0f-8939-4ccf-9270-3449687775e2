#include "bankAccount.h"
#include <iostream>

using namespace std;

// Constructor
bankAccount::bankAccount(int acctNumber, double bal) : accountNumber(acctNumber), balance(bal) {}

// Setters
void bankAccount::setAccountNumber(int acct) {
    accountNumber = acct;
}

void bankAccount::deposit(double amount) {
    balance += amount;
}

void bankAccount::withdraw(double amount) {
    if (amount <= balance) {
        balance -= amount;
    } else {
        cout << "Insufficient balance!" << endl;
    }
}

// Getters
int bankAccount::getAccountNumber() const {
    return accountNumber;
}

double bankAccount::getBalance() const {
    return balance;
}

// Print account info
void bankAccount::print() const {
    cout << "Account Number: " << accountNumber << endl;
    cout << "Balance: $" << balance << endl;
}
