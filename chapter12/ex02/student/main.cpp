#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// Function Prototypes
void processFile(const char* fileName);
int calculateScore(char* answerKey, char* studentAnswer, int numQuestions);
char calculateGrade(int score, int totalQuestions);

int main() {
    const char* fileName = "Ch12_Ex2Data.txt";
    processFile(fileName);
    return 0;
}

// Function to process the file
void processFile(const char* fileName) {
    ifstream inFile(fileName);

    if (!inFile) {
        cout << "Error opening file. Program terminates!" << endl;
        return;
    }

    int numQuestions = 20;

    // Dynamically allocate the answer key array
    char* answerKey = new char[numQuestions + 1];
    inFile >> answerKey;

    cout << "Processing Data\nKey: " << answerKey << "\n" << endl;

    char* studentID = new char[10];  // Assuming max length 9 + '\0'
    char* studentAnswer = new char[numQuestions + 1];

    while (inFile >> studentID) {
        inFile.ignore();  // Skip space
        inFile.getline(studentAnswer, numQuestions + 1);

        int score = calculateScore(answerKey, studentAnswer, numQuestions);
        char grade = calculateGrade(score, numQuestions);

        // Print results
        cout << setw(10) << left << studentID 
             << setw(25) << studentAnswer 
             << setw(5) << score << grade << endl;
    }

    // Free dynamically allocated memory
    delete[] answerKey;
    delete[] studentID;
    delete[] studentAnswer;

    inFile.close();
}

// Function to calculate score
int calculateScore(char* answerKey, char* studentAnswer, int numQuestions) {
    int score = 0;

    for (int i = 0; i < numQuestions; i++) {
        if (studentAnswer[i] == ' ') {
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
