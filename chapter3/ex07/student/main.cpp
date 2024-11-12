#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Write your main here
    double averageDailyBalance;
    double netBalance;
    double d1;
    double payment;
    double d2;
    double interest;
    double interestRate;

    cout<<fixed<<setprecision(2);
    cout<<"Enter netBalance"<<endl;
    cin>>netBalance;
    cout<<"Enter d1"<<endl;
    cin>>d1;
    cout<<"Enter payment"<<endl;
    cin>>payment;
    cout<<"Enter d2"<<endl;
    cin>>d2;
    cout<<"Enter interestRate"<<endl;
    cin>>interestRate;
    
    averageDailyBalance = (netBalance * d1 - payment * d2) / d1;
    interest = averageDailyBalance * interestRate;
    cout<<averageDailyBalance;

    return 0;
}