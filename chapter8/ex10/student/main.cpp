  
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double findMean(double x1, double x2, double x3,
                double x4, double x5);
 
double findStdDev(double x1, double x2, double x3,
                  double x4, double x5);
  
int main()
{
	double x1, x2, x3, x4, x5;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter five numbers: ";
    cin >> x1 >> x2 >> x3 >> x4 >> x5;
    cout << endl;

    cout << "The mean of the numbers is: "
         << findMean(x1, x2, x3, x4, x5)
         << endl;

    cout << "The standard deviation of the numbers is: "
         << findStdDev(x1, x2, x3, x4, x5)
         << endl;

	return 0;
}

double findMean(double x1, double x2, double x3,
                double x4, double x5)
{
	return (x1 + x2 + x3 + x4 + x5) / 5.0;
}

double findStdDev(double x1, double x2, double x3,
                  double x4, double x5)
{
	double mean = findMean(x1, x2, x3, x4, x5);
    double stdDev;

    stdDev = sqrt((pow(x1 - mean, 2) + pow(x2 - mean, 2) +
                   pow(x3 - mean, 2) + pow(x4 - mean, 2) +
                   pow(x5 - mean, 2)) / 5.0);
	return stdDev;
}