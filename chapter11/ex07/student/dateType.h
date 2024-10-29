#ifndef dateType_H
#define dateType_H 

#include <iostream>
#include <string>
//#include "dateTypeImp.cpp"
using namespace std;

class dateType
{
public:
	void setDate(int x, int y, int z);
	void setMonth(int x);
	void setDay(int x);
	void setYear(int x);

	void print() const;

	int numberOfDaysPassed();

	int numberOfDaysLeft();

	void incrementDate(int nDays);

	int getMonth() const;
	int getDay() const;
	int getYear() const;

	int getDaysInMonth();

	bool isLeapYear();

	dateType(int=1, int=1, int=1900); //default constructor
	   	 
private:
	int dMonth;
	int dDay;
	int dYear;
};
#endif
