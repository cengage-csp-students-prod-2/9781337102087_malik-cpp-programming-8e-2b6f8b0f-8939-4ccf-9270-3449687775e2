#include "checkingAccount.h"
#include <iostream>

using namespace std;

checkingAccount::checkingAccount(int acctNumber, double bal, 
                                 double minBal, double intRate, double servC) 
    : bankAccount(acctNumber, bal), minimumBalance(minBal), interestRate(intRate), serviceCharge(servC) {}

void checkingAccount::setInterestRate(double intRate) {
    interestRate = intRate;
}

void checkingAccount::setMinimumBalance(double minBalance) {
    minimumBalance = minBalance;
}

void checkingAccount::setServiceCharge(double servCharge) {
    serviceCharge = servCharge;
}

double checkingAccount::getInterestRate() const {
    return interestRate;
}

double checkingAccount::getMinimumBalance() const {
    return minimumBalance;
}

double checkingAccount::getServiceCharge() const {
    return serviceCharge;
}

void checkingAccount::postInterest() {
    balance += balance * interestRate;
}

bool checkingAccount::verifyMinimumBalance() const {
    return balance >= minimumBalance;
}

void checkingAccount::writeCheck(double amount) {
    if (amount <= balance) {
        balance -= amount;
    } else {
        cout << "Insufficient balance to write check!" << endl;
    }
}

void checkingAccount::withdraw(double amount) {
    // Deny withdrawal if there aren't enough funds
    if (balance - amount < minimumBalance) {
        cout << "Insufficient funds! Withdrawal denied." << endl;
        return;  // Deny withdrawal if balance goes below minimum balance
    }

    // If withdrawal would result in insufficient balance, apply service charge
    if (balance - amount < 0) {
        balance -= serviceCharge;  // Apply service charge
        cout << "Service charge applied!" << endl;
    }

    // Proceed with withdrawal
    bankAccount::withdraw(amount);
}

void checkingAccount::print() const {
    bankAccount::print();
    cout << "Interest Rate: " << interestRate * 100 << "%" << endl;
    cout << "Minimum Balance: $" << minimumBalance << endl;
    cout << "Service Charge: $" << serviceCharge << endl;
}
