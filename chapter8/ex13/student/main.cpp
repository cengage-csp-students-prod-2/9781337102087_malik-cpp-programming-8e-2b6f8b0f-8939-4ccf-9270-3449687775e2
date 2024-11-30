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

void calculateAverageGrade(double testaverage[], string grade[], double mark[][NumSub], double& classaverage) {
    double totalSum = 0.0;

    for (int nam = 0; nam < NumStds; nam++) {
        double sum = 0.0;
        for (int subj = 0; subj < NumSub; subj++) {
            sum += mark[nam][subj];
        }
        testaverage[nam] = sum / NumSub; // Average for each student
        totalSum += testaverage[nam];    // Sum for class average

        // Determine letter grade
        if (testaverage[nam] >= 90) {
            grade[nam] = "A";
        } else if (testaverage[nam] >= 80) {
            grade[nam] = "B";
        } else if (testaverage[nam] >= 70) {
            grade[nam] = "C";
        } else if (testaverage[nam] >= 60) {
            grade[nam] = "D";
        } else {
            grade[nam] = "F";
        }
    }

    classaverage = totalSum / NumStds; // Class average
}

void output(string n[], double mark[][NumSub], double testaverage[], string grade[], double classaverage) {
    cout << fixed << showpoint << setprecision(2);

    cout << "\nClass Average: " << classaverage << endl;

    // Print header
    cout << left << setw(12) << "Name";
    for (int day = 1; day <= NumSub; day++) {
        cout << setw(8) << ("Mark " + to_string(day));
    }
    cout << setw(10) << "Average" << "Grade" << endl;

    // Print student data
    for (int i = 0; i < NumStds; i++) {
        cout << left << setw(12) << n[i]; // Student name
        for (int j = 0; j < NumSub; j++) {
            cout << setw(8) << mark[i][j]; // Marks
        }
        cout << setw(10) << testaverage[i] << grade[i] << endl;
    }
}

int main() {
    string names[NumStds];
    double marks[NumStds][NumSub];
    string grade[NumStds];
    double testaverage[NumStds];
    double classaverage;

    fstream inFile;
    inFile.open("ch8_Ex13Data.txt");
    if (!inFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    getData(inFile, names, marks);
    calculateAverageGrade(testaverage, grade, marks, classaverage);
    output(names, marks, testaverage, grade, classaverage);

    inFile.close();
    return 0;
}
