#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

// Function Prototypes
void processFile(const string& fileName);
int calculateScore(const string& answerKey, const string& studentAnswer);
char calculateGrade(int score, int totalQuestions);

int main() {
    string fileName = "Ch12_Ex2Data.txt";
    processFile(fileName);
    return 0;
}

// Function to process the file
void processFile(const string& fileName) {
    ifstream inFile(fileName);

    if (!inFile) {
        cout << "Error opening file. Program terminates!" << endl;
        return;
    }

    string answerKey;
    getline(inFile, answerKey);  // Read answer key

    cout << "Processing Data\nKey: " << answerKey << "\n" << endl;

    string studentID, studentAnswer;
    while (inFile >> studentID) {
        inFile.ignore();  // Skip space before answers
        getline(inFile, studentAnswer);

        int score = calculateScore(answerKey, studentAnswer);
        char grade = calculateGrade(score, answerKey.length());

        // Print results
        cout << setw(10) << left << studentID 
             << setw(25) << studentAnswer 
             << setw(5) << score << grade << endl;
    }

    inFile.close();
}

// Function to calculate score
int calculateScore(const string& answerKey, const string& studentAnswer) {
    int score = 0;

    for (size_t i = 0; i < answerKey.length(); i++) {
        if (i >= studentAnswer.length() || studentAnswer[i] == ' ') {
            continue;  // Skipped question, no points deducted
        } else if (studentAnswer[i] == answerKey[i]) {
            score += 2;  // Correct answer
        } else {
            score -= 1;  // Incorrect answer
        }
    }

    return max(0, score);  // Ensure score is not negative
}

// Function to calculate grade
char calculateGrade(int score, int totalQuestions) {
    double percentage = (static_cast<double>(score) / (2 * totalQuestions)) * 100;

    if (percentage >= 90) return 'A';
    if (percentage >= 80) return 'B';
    if (percentage >= 70) return 'C';
    if (percentage >= 60) return 'D';
    return 'F';
}
