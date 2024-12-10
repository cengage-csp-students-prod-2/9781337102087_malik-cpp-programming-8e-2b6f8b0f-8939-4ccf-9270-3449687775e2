#ifndef COUNTERTYPE_H
#define COUNTERTYPE_H

#include <iostream>
using namespace std;

class counterType {
private:
    int counter;

public:
    // Constructors
    counterType(int c = 0);  // Default and parameterized constructor

    // Mutators (Setters)
    void setCounter(int c);   // Sets counter to a value
    void incrementCounter();  // Increments counter by 1
    void decrementCounter();  // Decrements counter by 1

    // Accessor (Getter)
    int getCounter() const;   // Returns current value of counter

    // Utility function
    void print() const;       // Prints counter value
};

#endif
