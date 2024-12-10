#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentInfo;
    int pos = 0;

    cout << "Enter a student's name, Social Security number, "
         << "user ID, and password in one line: " << endl;
    getline(cin, studentInfo);

    // Mask digits in the SSN
    for (int i = 0; i < 9; i++) {
        pos = studentInfo.find_first_of("0123456789", pos);
        if (pos != string::npos) {
            studentInfo.replace(pos, 1, "x");
        }
    }

    // Find position of second space after user ID
    pos = studentInfo.find(' ', pos);
    pos = studentInfo.find(' ', pos + 1);

    if (pos != string::npos) {
        // Mask the password
        int substrLen = studentInfo.length() - pos - 1;
        studentInfo.replace(pos + 1, substrLen, string(substrLen, 'x'));
    }

    cout << studentInfo << endl;
    return 0;
}

