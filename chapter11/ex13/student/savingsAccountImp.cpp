
#include "savingsAccount.h"
#include <iostream>

using namespace std;

savingsAccount::savingsAccount(int acctNumber, double bal, double intRate) 
    : bankAccount(acctNumber, bal), interestRate(intRate) {}

void savingsAccount::setInterestRate(double rate) {
    interestRate = rate;
}

double savingsAccount::getInterestRate() const {
    return interestRate;
}

void savingsAccount::postInterest() {
    balance += balance * interestRate;
}

void savingsAccount::withdraw(double amount) {
    bankAccount::withdraw(amount);
}

void savingsAccount::print() const {
    bankAccount::print();
    cout << "Interest Rate: " << interestRate * 100 << "%" << endl;
}
