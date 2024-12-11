#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int numCandidates;

    // Ask the user for the number of candidates
    cout << "Enter the number of candidates: ";
    cin >> numCandidates;

    // Dynamic arrays using 'new'
    string* candidates = new string[numCandidates];
    int* votes = new int[numCandidates];

    // Input the names and votes for each candidate
    for (int i = 0; i < numCandidates; ++i) {
        cout << "Enter the last name of candidate " << (i + 1) << ": ";
        cin >> candidates[i];
        cout << "Enter the number of votes for " << candidates[i] << ": ";
        cin >> votes[i];
    }

    // Calculate the total number of votes
    int totalVotes = 0;
    for (int i = 0; i < numCandidates; ++i) {
        totalVotes += votes[i];
    }

    // Display the results
    cout << fixed << setprecision(2);
    cout << "Candidate\tVotes Received\t% of Total Votes" << endl;

    for (int i = 0; i < numCandidates; ++i) {
        double percentage = (static_cast<double>(votes[i]) / totalVotes) * 100;
        cout << candidates[i] << "\t" << votes[i] << "\t" << percentage << "%" << endl;
    }

    // Display the total votes
    cout << "Total\t" << totalVotes << endl;

    // Find the winner (candidate with the highest number of votes)
    int maxVotes = votes[0];
    int winnerIndex = 0;
    for (int i = 1; i < numCandidates; ++i) {
        if (votes[i] > maxVotes) {
            maxVotes = votes[i];
            winnerIndex = i;
        }
    }

    // Output the winner in the exact format required
    cout << "The Winner of the Election is: " << candidates[winnerIndex] << endl;

    // Clean up dynamically allocated memory
    delete[] candidates;
    delete[] votes;

    return 0;
}
