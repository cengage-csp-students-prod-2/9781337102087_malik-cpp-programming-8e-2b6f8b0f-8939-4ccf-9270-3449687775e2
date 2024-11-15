#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Function to calculate the distance between two points
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Function to calculate the radius of the circle
double radius(double x1, double y1, double x2, double y2) {
    return distance(x1, y1, x2, y2);
}

// Function to calculate the circumference of the circle
double circumference(double r) {
    return 2 * M_PI * r;
}

// Function to calculate the area of the circle
double area(double r) {
    return M_PI * pow(r, 2);
}

int main() {
    // Variables for input
    double x1, y1, x2, y2;

    // Prompt user for input
    cout << "Enter the coordinates of the center (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of a point on the circle (x2, y2): ";
    cin >> x2 >> y2;

    // Calculate radius
    double r = radius(x1, y1, x2, y2);

    // Output results
    cout << fixed << setprecision(2);
    cout << "Radius: " << r << endl;
    cout << "Diameter: " << 2 * r << endl;
    cout << "Circumference: " << circumference(r) << endl;
    cout << "Area: " << area(r) << endl;

    return 0;
}