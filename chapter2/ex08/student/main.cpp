//include statement(s)
#include<iostream>
#include<string>
//using namespace statement
using namespace std;
int main()
{

    //variable declaration
    const int SECRET = 11;
    double RATE = 12.50;
    int num1;
    int num2;
    int num3;
    int newNum;
    string name;
    double hoursWorked;
    double wages;
    //executable statements
    cout<<"Enter two integer: "<<endl;
    cin>>num1>>num2;
    cout<<"Enter a person's last name: "<<endl;
    cin>>name;
    cout<<"Enter a number of hours worked between 0 to 70 : "<<endl;
    cin>>hoursWorked;
    wages = RATE * hoursWorked;
    cout<<"The value of num1 = "<<num1<<" and the value of num2 is "<<num2<<"."<<endl;
    newNum = num1 * 2 + num2 ;
    cout<<"The value of newNumv = "<< newNum<<endl;
    newNum = newNum + SECRET;
    cout<<"The value of newNum = "<<newNum<<endl;

    cout<<"Name: "<<name<<"\nPay Rate: $"<<RATE<<"\nHours Worked: "<<hoursWorked<<"\nSalary: $"<<wages<<endl;


    //return statement
}
