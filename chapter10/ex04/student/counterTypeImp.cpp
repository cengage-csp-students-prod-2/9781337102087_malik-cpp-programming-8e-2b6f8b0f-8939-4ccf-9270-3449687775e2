#include "counterType.h"

// Constructor
counterType::counterType(int c) {
    counter = (c >= 0) ? c : 0;  // Ensures non-negative counter
}

// Sets counter to a specified value
void counterType::setCounter(int c) {
    counter = (c >= 0) ? c : 0;  // Prevents negative values
}

// Increments counter by 1
void counterType::incrementCounter() {
    counter++;
}

// Decrements counter by 1 (if not already 0)
void counterType::decrementCounter() {
    if (counter > 0)
        counter--;
}

// Returns the current value of counter
int counterType::getCounter() const {
    return counter;
}

// Prints counter value
void counterType::print() const {
    cout << "Counter = " << counter << endl;
}
