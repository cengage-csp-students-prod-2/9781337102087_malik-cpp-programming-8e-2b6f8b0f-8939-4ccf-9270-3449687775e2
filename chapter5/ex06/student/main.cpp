#include <iostream>
#include<cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false; // Numbers <= 1 are not prime
    }
    if (num == 2) {
        return true; // 2 is the only even prime number
    }
    if (num % 2 == 0) {
        return false; // Other even numbers are not prime
    }

    // Check divisors from 3 to sqrt(num), skipping even numbers
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false; // Found a divisor, so num is not prime
        }
    }
    return true; // No divisors found, num is prime
}

int main() {
    // Write your main here
    int num;
    cout<<"Input any positive number";
    cin>>num;

    if (isPrime(num)) {
        cout << num << " is prime." <<endl;
    } else {
        cout << num << " is not prime." <<endl;
    }
        

    return 0;
}