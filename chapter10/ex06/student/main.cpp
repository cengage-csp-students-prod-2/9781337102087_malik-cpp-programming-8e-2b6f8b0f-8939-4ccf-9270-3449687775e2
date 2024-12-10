#include <iostream>
#include <string>
#include <map>

using namespace std;

class romanType {
private:
    string roman;
    int integer;

    // Map of Roman numerals and their corresponding integer values
    map<char, int> romanToInt = {
        {'M', 1000}, {'D', 500}, {'C', 100}, 
        {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}
    };

public:
    // Constructor
    romanType(string r = "") {
        roman = r;
        integer = convertToInteger();
    }

    // Function to convert Roman numeral to integer
    int convertToInteger() {
        int total = 0;
        int prevValue = 0;

        // Traverse from the end of the Roman numeral
        for (int i = roman.length() - 1; i >= 0; i--) {
            int value = romanToInt[roman[i]];

            if (value >= prevValue)
                total += value;
            else
                total -= value;

            prevValue = value;
        }
        return total;
    }

    // Function to print the Roman numeral
    void printRoman() const {
        cout << "Roman numeral: " << roman << endl;
    }

    // Function to print the integer value
    void printInteger() const {
        cout << "Integer value: " << integer << endl;
    }
};

// Main function to test the program
int main() {
    string testNumerals[] = {"MCXIV", "CCCLIX", "MDCLXVI"};

    for (const auto& numeral : testNumerals) {
        romanType romanNum(numeral);
        romanNum.printRoman();
        romanNum.printInteger();
        cout << "-----------------------------" << endl;
    }

    return 0;
}

