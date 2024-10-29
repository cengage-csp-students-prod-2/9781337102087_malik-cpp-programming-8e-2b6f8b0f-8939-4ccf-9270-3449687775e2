//The user program that uses the class clockType
 
#include <iostream> 
#include "clockType.h"

using namespace std;

int main()
{
    clockType myClock;
    clockType yourClock;   

    int hours;
    int minutes;
    int seconds;

    myClock.setTime(5, 4, 30); 

    cout << "myClock: "; 
    myClock.printTime();
    cout << endl;

    cout << "yourClock: "; 
    yourClock.printTime();
    cout << endl; 

        //Set the time of yourClock
    yourClock.setTime(5, 45, 16); 

    cout << "After setting, yourClock: ";
    yourClock.printTime();
    cout << endl; 

    cout << "Enter the hours, minutes, and "
         << "seconds: ";  
    cin >> hours >> minutes >> seconds; 
    cout << endl; 

    myClock.setHours(hours);
    myClock.setMinutes(minutes);
    myClock.setSeconds(seconds);

    cout << "myClock: "; 
    myClock.printTime(); 
    cout << endl;  

    myClock.incrementSeconds(); 

    cout << "After incrementing myClock by " 
         << "one second, myClock: "; 
    myClock.printTime(); 
    cout << endl; 

        //Output the value of hours, minutes, and seconds
        //of myClock
    cout << "hours = " << myClock.getHours() 
         << ", minutes = " << myClock.getMinutes() 
         << ", seconds = " << myClock.getSeconds() << endl << endl << endl;
  
    return 0;
}//end main
