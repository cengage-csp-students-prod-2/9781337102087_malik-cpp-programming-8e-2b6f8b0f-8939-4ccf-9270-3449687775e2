#include "dateType.h"
#include <iostream>

using namespace std;

dateType::dateType(int month, int day, int year) {
    setDate(month, day, year);
}

void dateType::setDate(int month, int day, int year) {
    dMonth = month;
    dDay = day;
    dYear = year;
}

void dateType::printDate() const {
    cout << dMonth << "-" << dDay << "-" << dYear;
}
