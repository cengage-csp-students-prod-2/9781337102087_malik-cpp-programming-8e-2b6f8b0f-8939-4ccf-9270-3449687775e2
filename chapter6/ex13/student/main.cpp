#include <iostream>
#include<cmath>

using namespace std;

double interest(double r , double m){
    return r/m;
}

double periodic_payment(double L,double i ,double m,double t){
double a = pow((1+i),-(m*t));
return (L*i)/(1-a);

}

double unpaid(double R, double i , double m, double t, double k ){
    double b = pow((1+i),-((m*t)-k));
    return R*(1-b)/i;

}

int main() {
    // Write your main here
    double L;
    cout<<"Enter the loan amount: ";
    cin>>L;
    cout<<endl;

    double r;
    cout<<"Enter the interest rate per year as a percentage: ";
    cin>>r;
    cout<<endl;

    double m;
    cout<<"Enter the number of payments per year: ";
    cin>>m;
    cout<<endl;

    double t;
    cout<<"Enter the number of years for the loan: ";
    cin>>t;
    cout<<endl;

    // Output 1
    double i = interest(r,m);
    cout<<i<<endl;

    double ans = periodic_payment(L, i , m, t);
    cout<<"The periodic payment is: "<<ans;

    

    double k;
    cout<<"Enter the number of payments made: ";
    cin>>k;
    cout<<endl;


    // output 2
    double ans2 = unpaid(ans, i, m, t, k);
    cout<<"The unpaid balance after 20 payment(s) is: "<<ans2;


    


    return 0;
}