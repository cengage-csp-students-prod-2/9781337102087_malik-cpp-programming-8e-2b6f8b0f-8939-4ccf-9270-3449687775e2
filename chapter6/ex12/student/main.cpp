#include <iostream>
#include <cmath>
#include <iomanip>  // For setting precision

using namespace std;

// Function to calculate the mean
double calculate_mean(double numbers[], int size) {
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += numbers[i];
    }
    return sum / size;
}

// Function to calculate the standard deviation
double calculate_standard_deviation(double numbers[], int size, double mean) {
    double variance = 0;
    for (int i = 0; i < size; ++i) {
        variance += pow(numbers[i] - mean, 2);
    }
    variance /= size;
    return sqrt(variance);
}

int main() {
    double numbers[5]; // Array to store the five numbers

    // Taking input for five numbers
    for (int i = 0; i < 5; ++i) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Calculating the mean
    double mean = calculate_mean(numbers, 5);

    // Calculating the standard deviation
    double std_deviation = calculate_standard_deviation(numbers, 5, mean);

    // Output the results with 2 decimal precision
    cout << fixed << setprecision(2); // Ensures the output has 2 decimal places
    cout << "Mean: " << mean << endl;
    cout << "Standard Deviation: " << std_deviation << endl;

    return 0;
}