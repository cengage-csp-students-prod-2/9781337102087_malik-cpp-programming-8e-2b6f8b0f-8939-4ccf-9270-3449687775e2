#include <iostream>
#include "checkingAccount.h"
#include "savingsAccount.h"

using namespace std;

int main() {
    // Test checking account
    checkingAccount cAcc(1001, 1500);
    cAcc.deposit(200);
    cAcc.withdraw(100);
    cAcc.postInterest();
    cAcc.print();
    cout << endl;

    // Test savings account
    savingsAccount sAcc(2001, 1000);
    sAcc.deposit(500);
    sAcc.withdraw(300);
    sAcc.postInterest();
    sAcc.print();

    return 0;
}