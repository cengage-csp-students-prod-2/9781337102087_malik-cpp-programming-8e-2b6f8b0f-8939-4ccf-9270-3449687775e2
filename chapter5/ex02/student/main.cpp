#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double pi = 0;
    int i;
    int n;
    cout << "Enter the value of n: "<<endl;
    cin >> n;
    
    
     for (i = 0; i < n; i++)
    {
        if (i % 2 == 0){
            pi = pi + (1.0 / (2 * i + 1));
        }
        else{
            pi = pi - (1.0 / (2 * i + 1));
    
    }}

    cout<<fixed<<showpoint<<setprecision(5);
    pi = 4 * pi;
    
    
    cout << "pi = " << pi << endl;
    return 0;
}