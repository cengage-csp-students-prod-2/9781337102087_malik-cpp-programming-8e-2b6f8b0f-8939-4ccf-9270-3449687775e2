#include <iostream>
#include <string>
#include "dayType.h"

using namespace std;

// Initialize static array
string dayType::weekDays[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

// Default constructor
dayType::dayType() {
    weekDay = "Sunday";
}

// Parameterized constructor
dayType::dayType(string d) {
    setDay(d);
}

// Function to print the current day
void dayType::print() const {
    cout << weekDay << endl;
}

// Function to get the next day
string dayType::nextDay() const {
    for (int i = 0; i < 7; i++) {
        if (weekDays[i] == weekDay) {
            return weekDays[(i + 1) % 7];
        }
    }
    return "Invalid day!";
}

// Function to get the previous day
string dayType::prevDay() const {
    for (int i = 0; i < 7; i++) {
        if (weekDays[i] == weekDay) {
            return weekDays[(i + 6) % 7];
        }
    }
    return "Invalid day!";
}

// Function to add days
void dayType::addDay(int nDays) {
    for (int i = 0; i < 7; i++) {
        if (weekDays[i] == weekDay) {
            weekDay = weekDays[(i + nDays) % 7];
            return;
        }
    }
}

// Function to set the current day
void dayType::setDay(string d) {
    for (string day : weekDays) {
        if (day == d) {
            weekDay = d;
            return;
        }
    }
    cout << "Invalid day entered. Defaulting to Sunday." << endl;
    weekDay = "Sunday";
}

// Function to get the current day
string dayType::getDay() const {
    return weekDay;
}
