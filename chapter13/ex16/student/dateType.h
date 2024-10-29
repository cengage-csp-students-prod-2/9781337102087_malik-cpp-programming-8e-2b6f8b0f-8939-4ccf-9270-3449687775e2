#ifndef dateType_H
#define dateType_H

#include <iostream>
 
using namespace std;
   
class dateType
{
    friend ostream& operator<<(ostream&, const dateType&);
    friend istream& operator>>(istream&, dateType&);

public:
    void setDate(int, int, int);
    void setMonth(int);
    void setDay(int);
    void setYear(int);
    int getMonth() const;
    int getDay() const;
    int getYear() const;

    // Declare overloaded operator functions
    

    bool isLeapYear();
    int getDaysInMonth();

    dateType(int = 1, int = 1, int = 1900);

private:
    int dMonth;
    int dDay;
    int dYear;
};

#endif