#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

// Define studentType struct
struct studentType {
    string studentFName;
    string studentLName;
    int testScore;
    char grade;
};

// Function prototypes
void readStudentsData(studentType students[], int size);
void assignGrades(studentType students[], int size);
int findHighestScore(studentType students[], int size);
void printTopStudents(studentType students[], int size, int highestScore);
void printStudents(const studentType students[], int size);

const int SIZE = 20;

int main() {
    studentType students[SIZE];
    readStudentsData(students, SIZE);
    assignGrades(students, SIZE);
    int highestScore = findHighestScore(students, SIZE);
    printStudents(students, SIZE);
    printTopStudents(students, SIZE, highestScore);
    return 0;
}

// Function to read students' data from file
void readStudentsData(studentType students[], int size) {
    ifstream inputFile("Ch9_Ex2Data.txt");
    if (!inputFile) {
        cerr << "Error opening file!" << endl;
        exit(1);
    }

    for (int i = 0; i < size; i++) {
        inputFile >> students[i].studentFName >> students[i].studentLName >> students[i].testScore;
    }

    inputFile.close();
}

// Function to assign grades
void assignGrades(studentType students[], int size) {
    for (int i = 0; i < size; i++) {
        if (students[i].testScore >= 90)
            students[i].grade = 'A';
        else if (students[i].testScore >= 80)
            students[i].grade = 'B';
        else if (students[i].testScore >= 70)
            students[i].grade = 'C';
        else if (students[i].testScore >= 60)
            students[i].grade = 'D';
        else
            students[i].grade = 'F';
    }
}

// Function to find the highest test score
int findHighestScore(studentType students[], int size) {
    int highest = students[0].testScore;
    for (int i = 1; i < size; i++) {
        if (students[i].testScore > highest) {
            highest = students[i].testScore;
        }
    }
    return highest;
}

// Function to print students with the highest test score
void printTopStudents(studentType students[], int size, int highestScore) {
    ofstream outputFile("Ch9_Ex2Out.txt", ios::app);
    outputFile << "\nStudents with the highest score of " << highestScore << ":\n";

    for (int i = 0; i < size; i++) {
        if (students[i].testScore == highestScore) {
            outputFile << left << setw(20) << students[i].studentLName + ", " + students[i].studentFName << endl;
        }
    }
    outputFile.close();
}

// Function to print all students' data to a file
void printStudents(const studentType students[], int size) {
    ofstream outputFile("Ch9_Ex2Out.txt");

    outputFile << left << setw(20) << "Name" << setw(10) << "Score" << setw(5) << "Grade" << endl;
    outputFile << "---------------------------------------\n";

    for (int i = 0; i < size; i++) {
        outputFile << left << setw(20)
                   << students[i].studentLName + ", " + students[i].studentFName
                   << setw(10) << students[i].testScore
                   << setw(5) << students[i].grade << endl;
    }

    outputFile.close();
}
