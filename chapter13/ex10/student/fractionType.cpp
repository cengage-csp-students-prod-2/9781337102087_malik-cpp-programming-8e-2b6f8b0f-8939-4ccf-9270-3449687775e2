//Implementation file fractionType.cpp  
 
#include <iostream>
#include "fractionType.h" 
 
using namespace std;

ostream& operator <<  (ostream& os, const fractionType& fraction)
{
    os << fraction.numerator << " / " << fraction.denominator;
    return os;
}

istream& operator>> (istream& is, fractionType& fraction)
{
    char ch;

    is >> fraction.numerator;       //get the numerator
    is >> ch;                      //read and discard /
    is >> fraction.denominator;  //get the denominator

    return is;
}

bool fractionType::operator==(fractionType rightFr) const
{
    return (numerator * rightFr.denominator == 
            denominator * rightFr.numerator);
}

bool fractionType::operator!=(fractionType rightFr) const
{
    return (numerator * rightFr.denominator != 
            denominator * rightFr.numerator);
}

bool fractionType::operator<=(fractionType rightFr) const
{
    return (numerator * rightFr.denominator <= 
            denominator * rightFr.numerator);
}

bool fractionType::operator<(fractionType rightFr) const
{
    return (numerator * rightFr.denominator < 
            denominator * rightFr.numerator);
}

bool fractionType::operator>=(fractionType rightFr) const
{
    return (numerator * rightFr.denominator >= 
            denominator * rightFr.numerator);
}

bool fractionType::operator>(fractionType rightFr) const
{
    return (numerator * rightFr.denominator > 
            denominator * rightFr.numerator);
}
  //constructor
fractionType::fractionType(int num, int deno)
{
    numerator = num;

    if (deno == 0)
    {
        cout << "denominator cannot be zero" << endl;
        denominator = 1;
    }
    else
        denominator = deno;
}

void fractionType::setFraction(int num, int deno)
{
    numerator = num;

    if (deno == 0)
    {
        cout << "denominator cannot be zero" << endl;
        denominator = 1;
    }
    else
        denominator = deno;
}

   //overload the operator +
fractionType fractionType::operator+(fractionType rightFr)
{
    fractionType temp;

    temp.numerator = numerator * rightFr.denominator
                     + rightFr.numerator * denominator;

    temp.denominator = denominator * rightFr.denominator;

    return temp;
}

   //overload the operator *
fractionType fractionType::operator*(fractionType rightFr)
{
    fractionType temp;

    temp.numerator = numerator * rightFr.numerator;
    temp.denominator = denominator * rightFr.denominator;

    return temp;
}

fractionType fractionType::operator-(fractionType rightFr)
{
    fractionType temp;

    temp.numerator = numerator * rightFr.denominator
                     - rightFr.numerator * denominator;

    temp.denominator = denominator * rightFr.denominator;

    return temp;
}

fractionType fractionType::operator/(fractionType rightFr)
{
    fractionType temp;

    if (rightFr.numerator == 0)
    {
        cout << "Cannot divide by zero" << endl;
        return *this;
	}
    else
    {
        temp.numerator = numerator * rightFr.denominator;

        temp.denominator = rightFr.numerator * denominator;

        return temp;
    }
}