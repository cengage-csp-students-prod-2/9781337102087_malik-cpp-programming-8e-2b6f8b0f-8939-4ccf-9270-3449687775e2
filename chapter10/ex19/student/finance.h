#ifndef FINANCE_H
#define FINANCE_H

class finance 
{
public:
    void set(double pD = 0, double depInAYear = 0, double y = 0, 
             double ir = 0);

    void setPeriodicDeposit(double pD);
    void setNumOfDepositsInAYear(double depInAYear);
    void setTotalNumOfYears(double y);
    void setInterestRate(double ir);

    double getPeriodicDeposit();
    double getNumOfDepositsInAYear();
    double getTotalNumOfYears();
    double getInterestRate();

    double totalAccumulated();

    double periodicPaymentToAccumulateASum(double s);

    finance(double pD = 0, double depInAYear = 0,  double y = 0,
            double ir = 0);

private:
    double periodicDeposit;  //R
    double numOfDepositsInAYear;  //m
    double years;  //t
    double interestRate;  //r 
};
#endif
