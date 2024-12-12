#include <iostream>
#include "dateType.h"

using namespace std;

dateType::dateType(int month, int day, int year) {
   dMonth = month;
   dDay = day;
   dYear = year;
}

void dateType::setDate(int month, int day, int year) {
   dMonth = month;
   dDay = day;
   dYear = year;
}

int dateType::getDay() const {
   return dDay;
}

int dateType::getMonth() const {
   return dMonth;
}

int dateType::getYear() const {
   return dYear;
}

void dateType::printDate() const {
   // Print month with leading zero if it's a single digit
   if (dMonth < 10) {
       cout << "0";
   }
   cout << dMonth << "-";

   // Print day with leading zero if it's a single digit
   if (dDay < 10) {
       cout << "0";
   }
   cout << dDay << "-";

   // Print year
   cout << dYear;
}
