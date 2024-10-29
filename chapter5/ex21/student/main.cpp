  
#include <iostream>
#include <iomanip>

using namespace std;
 
int main ()  
{
	double loanAmount;
	double interestRate;
    double interestRatePerMonth;
	double monthlyPayment;
    double paymentPrincipal;
	int months;

	cout << fixed << showpoint;
	cout << setprecision(2);

	cout << "Enter the loan amount: ";
	cin >> loanAmount;
	cout << endl;

    cout << "Enter the interest rate per year: ";
    cin >> interestRate;
    cout << endl;

    interestRatePerMonth = (interestRate / 100) / 12;

    cout << "Enter the monthly payment: ";
    cin >> monthlyPayment;

    if (monthlyPayment <= loanAmount * interestRatePerMonth)
    {
        cout << "Monthly payment is too low. The loan cannot be repaid."
            << endl;
        return 1;
    }

    months = 0;

    while (loanAmount > 0)
    {
        paymentPrincipal = monthlyPayment - (loanAmount * interestRatePerMonth);
        loanAmount = loanAmount - paymentPrincipal;
        months++;
    }

    cout << "It will take " << months << " months to repay the loan."
         << endl;

	return 0;
}