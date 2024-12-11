#include <iostream>
#include <string>
#include "dayType.h"  

using namespace std;

int main() {
    dayType myDay("Tuesday");

    cout << "Current Day: ";
    myDay.print();

    cout << "Next Day: " << myDay.nextDay() << endl;
    cout << "Previous Day: " << myDay.prevDay() << endl;

    myDay.addDay(3);
    cout << "After adding 3 days: ";
    myDay.print();

    return 0;
}
