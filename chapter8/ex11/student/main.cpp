#include <iostream>
#include <string>

using namespace std;

const int DIGITS = 20;

// Function to read a number and store its digits in reverse order
int readNum(int list[], int& length) {
    string numStr;

    cout << "Enter a positive integer of at most " << DIGITS << " digits: ";
    cin >> numStr;
    cout << endl;

    length = numStr.length();

    if (length > DIGITS) {
        cout << "Number is more than " << DIGITS << " digits." << endl;
        return -1;
    }

    // Store digits in reverse order for easier addition
    for (int i = 0; i < length; i++) {
        list[i] = numStr[length - 1 - i] - '0';  // Convert char to int
    }

    return 0;
}

// Function to sum two numbers stored as arrays of digits
void sumNum(int list1[], int numOfElementsList1,
            int list2[], int numOfElementsList2) {
    int sumArray[DIGITS + 1] = {0};  // Result array with one extra digit for carry
    int carry = 0;
    int index = 0;

    // Sum digits of both arrays
    while (index < numOfElementsList1 || index < numOfElementsList2 || carry > 0) {
        int digit1 = (index < numOfElementsList1) ? list1[index] : 0;
        int digit2 = (index < numOfElementsList2) ? list2[index] : 0;

        int sumDigits = digit1 + digit2 + carry;
        sumArray[index] = sumDigits % 10;
        carry = sumDigits / 10;

        index++;
    }

    // Check if the sum overflows the DIGITS limit
    if (index > DIGITS) {
        cout << "The sum of the numbers overflows: ";
    } else {
        cout << "The sum is: ";
    }

    // Print the result in reverse order
    for (int i = index - 1; i >= 0; i--) {
        cout << sumArray[i];
    }
    cout << endl;
}

int main() {
    int num1[DIGITS] = {0}, num2[DIGITS] = {0};
    int length1 = 0, length2 = 0;

    // Read two numbers
    if (readNum(num1, length1) == -1 || readNum(num2, length2) == -1) {
        return 1;  // Exit if input is invalid
    }

    // Sum the two numbers
    sumNum(num1, length1, num2, length2);

    return 0;
}
