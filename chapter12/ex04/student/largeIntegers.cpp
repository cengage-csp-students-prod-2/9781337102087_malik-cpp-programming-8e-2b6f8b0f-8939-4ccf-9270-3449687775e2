#include "largeIntegers.h"

using namespace std;

largeIntegers::largeIntegers() {
    // Empty initialization, number starts as 0
    digits.push_back(0);
}

largeIntegers::largeIntegers(const string& number) {
    setValue(number);
}

largeIntegers::largeIntegers(const largeIntegers& other) {
    digits = other.digits;
}

largeIntegers::~largeIntegers() {
    // Destructor does nothing special for vector-based implementation
}

void largeIntegers::setValue(const string& number) {
    digits.clear(); // Clear any existing digits
    for (char c : number) {
        if (isdigit(c)) {
            digits.push_back(c - '0'); // Convert char to int and store
        }
    }
    removeLeadingZeros(); // Remove leading zeros
}

string largeIntegers::getValue() const {
    string value;
    for (int digit : digits) {
        value += (digit + '0'); // Convert int back to char
    }
    return value;
}

void largeIntegers::printValue() const {
    cout << getValue() << endl;
}

void largeIntegers::removeLeadingZeros() {
    while (digits.size() > 1 && digits[0] == 0) {
        digits.erase(digits.begin()); // Remove leading zero
    }
}

largeIntegers largeIntegers::add(const largeIntegers& other) const {
    const vector<int>& num1 = digits;
    const vector<int>& num2 = other.digits;

    int maxLength = max(num1.size(), num2.size());
    vector<int> result(maxLength + 1, 0); // Result will have at most one extra digit

    int carry = 0;
    for (int i = 0; i < maxLength; ++i) {
        int sum = carry;
        if (i < num1.size()) sum += num1[num1.size() - 1 - i];
        if (i < num2.size()) sum += num2[num2.size() - 1 - i];
        
        result[result.size() - 1 - i] = sum % 10;
        carry = sum / 10;
    }

    if (carry) {
        result[0] = carry;
    } else {
        result.erase(result.begin());
    }

    largeIntegers sumResult;
    sumResult.digits = result;
    return sumResult;
}

largeIntegers largeIntegers::subtract(const largeIntegers& other) const {
    // Handle subtraction (ensure num1 >= num2 for simplicity)
    const vector<int>& num1 = digits;
    const vector<int>& num2 = other.digits;

    vector<int> result;
    int borrow = 0;

    for (int i = 0; i < num1.size(); ++i) {
        int diff = num1[num1.size() - 1 - i] - borrow;
        if (i < num2.size()) diff -= num2[num2.size() - 1 - i];

        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }

        result.insert(result.begin(), diff);
    }

    largeIntegers diffResult;
    diffResult.digits = result;
    diffResult.removeLeadingZeros();
    return diffResult;
}

largeIntegers largeIntegers::multiply(const largeIntegers& other) const {
    const vector<int>& num1 = digits;
    const vector<int>& num2 = other.digits;

    vector<int> result(num1.size() + num2.size(), 0);

    for (int i = num1.size() - 1; i >= 0; --i) {
        for (int j = num2.size() - 1; j >= 0; --j) {
            int product = num1[i] * num2[j];
            int temp = product + result[i + j + 1];
            result[i + j + 1] = temp % 10;
            result[i + j] += temp / 10;
        }
    }

    largeIntegers prodResult;
    prodResult.digits = result;
    prodResult.removeLeadingZeros();
    return prodResult;
}

bool largeIntegers::equalTo(const largeIntegers& other) const {
    return digits == other.digits;
}

bool largeIntegers::notEqualTo(const largeIntegers& other) const {
    return !equalTo(other);
}

bool largeIntegers::greaterThan(const largeIntegers& other) const {
    if (digits.size() != other.digits.size()) {
        return digits.size() > other.digits.size();
    }

    for (int i = 0; i < digits.size(); ++i) {
        if (digits[i] != other.digits[i]) {
            return digits[i] > other.digits[i];
        }
    }

    return false;
}

bool largeIntegers::lessThan(const largeIntegers& other) const {
    return !greaterThan(other) && !equalTo(other);
}

bool largeIntegers::greaterOrEqual(const largeIntegers& other) const {
    return greaterThan(other) || equalTo(other);
}

bool largeIntegers::lessOrEqual(const largeIntegers& other) const {
    return lessThan(other) || equalTo(other);
}
