#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

// Structure Definition
struct letterType {
    char letter;
    int count;
};

// Function Prototypes
void openFile(ifstream& inF, ofstream& outF);
void initialize(letterType lList[], int listSize);
void count(ifstream& inF, letterType lList[], int listSize);
void printResult(ofstream& outF, letterType lList[], int listSize);

int main() {
    letterType letterList[52];
    ifstream inFile;
    ofstream outFile;

    openFile(inFile, outFile);

    initialize(letterList, 52);
    count(inFile, letterList, 52);
    printResult(outFile, letterList, 52);

    inFile.close();
    outFile.close();

    return 0;
}

// Function Definitions
void openFile(ifstream& inF, ofstream& outF) {
    string fileName;

    cout << "Enter the name of the input file: ";
    cin >> fileName;
    inF.open(fileName.c_str());

    if (!inF) {
        cout << "The input file does not exist. Program terminates!" << endl;
        exit(1);
    }

    cout << "Enter the name of the output file: ";
    cin >> fileName;
    outF.open(fileName.c_str());

    if (!outF) {
        cout << "Cannot open the output file. Program terminates!" << endl;
        exit(1);
    }
}

void initialize(letterType lList[], int listSize) {
    for (int i = 0; i < 26; i++) {
        lList[i].letter = static_cast<char>(i + 'A');
        lList[i].count = 0;
    }

    for (int i = 26; i < 52; i++) {
        lList[i].letter = static_cast<char>(i + 'a' - 26);
        lList[i].count = 0;
    }
}

void count(ifstream& inF, letterType lList[], int listSize) {
    char ch;
    while (inF >> ch) {
        if ('A' <= ch && ch <= 'Z')
            lList[ch - 'A'].count++;
        else if ('a' <= ch && ch <= 'z')
            lList[ch - 'a' + 26].count++;
    }
}

void printResult(ofstream& outF, letterType lList[], int listSize) {
    int totalLetters = 0;
    for (int i = 0; i < listSize; i++)
        totalLetters += lList[i].count;

    outF << fixed << showpoint << setprecision(2);
    outF << "Letter  Count   Percentage of Occurrence\n";

    for (int i = 0; i < listSize; i++) {
        double percentage = (totalLetters != 0) ? 
                            (static_cast<double>(lList[i].count) / totalLetters * 100) 
                            : 0;

        outF << "   " << lList[i].letter 
             << setw(8) << lList[i].count 
             << setw(15) << percentage << "%\n";
    }
}
