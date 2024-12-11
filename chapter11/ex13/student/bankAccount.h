#ifndef H_bankAccount 
#define H_bankAccount

class bankAccount
{
public:
    // Constructor
    bankAccount(int acctNumber = -1, double bal = 0);

    // Setters
    void setAccountNumber(int acct);
    void deposit(double amount);
    void withdraw(double amount);

    // Getters
    int getAccountNumber() const;
    double getBalance() const;

    // Print account info
    void print() const;

protected:
    int accountNumber;
    double balance;
};

#endif
