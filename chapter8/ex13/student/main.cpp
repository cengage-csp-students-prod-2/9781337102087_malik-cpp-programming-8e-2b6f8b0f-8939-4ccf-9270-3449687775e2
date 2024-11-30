#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

const int NumStds = 10;
const int NumSub = 5;

void getData(fstream& inf, string n[], double mark[][NumSub]) {
    for (int i = 0; i < NumStds; i++) {
        inf >> n[i];
        for (int j = 0; j < NumSub; j++) {
            inf >> mark[i][j];
        }
    }
}

void calculateAverageGrade(double studentAvg[], string grade[], double mark[][NumSub], double& classAverage) {
    double totalSum = 0.0;

    for (int i = 0; i < NumStds; i++) {
        double sum = 0.0;
        for (int j = 0; j < NumSub; j++) {
            sum += mark[i][j];
        }
        studentAvg[i] = sum / NumSub;
        totalSum += studentAvg[i];

        // Assign grade
        if (studentAvg[i] >= 90) grade[i] = "A";
        else if (studentAvg[i] >= 80) grade[i] = "B";
        else if (studentAvg[i] >= 70) grade[i] = "C";
        else if (studentAvg[i] >= 60) grade[i] = "D";
        else grade[i] = "F";
    }

    classAverage = totalSum / NumStds;
}

void output(string n[], double mark[][NumSub], double studentAvg[], string grade[], double classAverage) {
    cout << fixed << showpoint << setprecision(2);

    // Output header
    cout << "Name        ";
    for (int i = 1; i <= NumSub; i++) {
        cout << "Mark " << i << "   ";
    }
    cout << "Average Grade" << endl;

    // Output individual scores
    for (int i = 0; i < NumStds; i++) {
        cout << left << setw(12) << n[i];
        for (int j = 0; j < NumSub; j++) {
            cout << setw(8) << mark[i][j];
        }
        cout << setw(8) << studentAvg[i] << grade[i] << endl;
    }

    // Output class average
    cout << "\nClass average: " << classAverage << endl;
}

int main() {
    string names[NumStds];
    double marks[NumStds][NumSub];
    string grade[NumStds];
    double studentAvg[NumStds];
    double classAverage;

    fstream inFile("ch8_Ex13Data.txt");
    if (!inFile) {
        cerr << "Error: Could not open file." << endl;
        return 1;
    }

    getData(inFile, names, marks);
    calculateAverageGrade(studentAvg, grade, marks, classAverage);
    output(names, marks, studentAvg, grade, classAverage);

    inFile.close();
    return 0;
}
