#ifndef H_savingsAccount
#define H_savingsAccount

#include "bankAccount.h"

const double DEFAULT_INTEREST_RATE_SAVINGS = 0.06;

class savingsAccount : public bankAccount
{
public:
    // Constructor
    savingsAccount(int acctNumber, double bal, double intRate = DEFAULT_INTEREST_RATE_SAVINGS);

    // Setters and Getters
    void setInterestRate(double rate);
    double getInterestRate() const;

    // Operations
    void postInterest();
    void withdraw(double amount);
    void print() const;

protected:
    double interestRate;
};

#endif
