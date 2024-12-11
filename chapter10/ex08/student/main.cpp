#include <iostream>
#include <string>
#include "dayType.h"
using namespace std;

string dayType::weekDays[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

// Constructor

dayType::dayType() {
    weekDay = "Sunday";
}

dayType::dayType(string d) {
    setDay(d);
}

// Set the current day
void dayType::setDay(string d) {
    for (int i = 0; i < 7; i++) {
        if (weekDays[i] == d) {
            weekDay = d;
            return;
        }
    }
    cout << "Invalid day. Defaulting to Sunday." << endl;
    weekDay = "Sunday";
}

// Get the current day
string dayType::getDay() const {
    return weekDay;
}

// Print the current day
void dayType::print() const {
    cout << "Current Day: " << weekDay << endl;
}

// Get the previous day
string dayType::prevDay() const {
    for (int i = 0; i < 7; i++) {
        if (weekDays[i] == weekDay) {
            return weekDays[(i - 1 + 7) % 7];
        }
    }
    return "Sunday";
}

// Get the next day
string dayType::nextDay() const {
    for (int i = 0; i < 7; i++) {
        if (weekDays[i] == weekDay) {
            return weekDays[(i + 1) % 7];
        }
    }
    return "Sunday";
}

// Add days to the current day
void dayType::addDay(int nDays) {
    for (int i = 0; i < 7; i++) {
        if (weekDays[i] == weekDay) {
            weekDay = weekDays[(i + nDays + 7) % 7];
            return;
        }
    }
}

int main() {
    string inputDay;
    cout << "Enter the current day: ";
    cin >> inputDay;

    dayType today(inputDay);
    today.print();

    cout << "Previous Day: " << today.prevDay() << endl;
    cout << "Next Day: " << today.nextDay() << endl;

    int add;
    cout << "Enter number of days to add: ";
    cin >> add;
    today.addDay(add);
    today.print();

    return 0;
}
