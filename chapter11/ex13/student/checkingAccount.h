#ifndef H_checkingAccount
#define H_checkingAccount

#include "bankAccount.h"

const double DEFAULT_INTEREST_RATE_CHECKING = 0.04;
const double DEFAULT_MIN_BALANCE = 500.00;
const double DEFAULT_SERVICE_CHARGE = 20.00;

class checkingAccount : public bankAccount 
{
public:
    // Constructor
    checkingAccount(int acctNumber, double bal, 
                    double minBal = DEFAULT_MIN_BALANCE, 
                    double intRate = DEFAULT_INTEREST_RATE_CHECKING, 
                    double servC = DEFAULT_SERVICE_CHARGE);

    // Setters
    void setInterestRate(double intRate);
    void setMinimumBalance(double minBalance);
    void setServiceCharge(double servCharge);

    // Getters
    double getInterestRate() const;
    double getMinimumBalance() const;
    double getServiceCharge() const;

    // Operations
    void postInterest();
    bool verifyMinimumBalance() const;
    void writeCheck(double amount);
    void withdraw(double amount);
    void print() const;

protected:
    double interestRate;
    double minimumBalance;
    double serviceCharge;
};

#endif
