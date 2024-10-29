#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double pi = 0;
    long i;
    long n;
    
    cin >> n;
    cout << "Enter the value of n: ";
    cout << endl;
    
    if (i % 2 == 0)
        pi = pi + (1 / (2 * i + 1));
    else
        pi = pi - (1 / (2 * i + 1));
    
    for (i = 0; i < n; i++)
    {
        pi = 0;
        pi = 4 * pi;
    }
    
    cout << endl << "pi = " << pi << endl;
    return 0;
}