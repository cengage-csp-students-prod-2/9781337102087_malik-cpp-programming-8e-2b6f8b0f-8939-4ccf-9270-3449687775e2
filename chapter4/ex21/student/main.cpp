#include <iostream>
#include<iomanip>

using namespace std;

int main() {
    // Write your main here
    double x1;
    double y1;
    double x2;
    double y2;
    double m;
    double b;

    cout<<"Input Input x1, Input y1, Input x2, Input y2"<<endl;
    cin>>x1>>y1>>x2>>y2;
    cout<<fixed<<showpoint<<setprecision(2)<<endl;
    if(x1 == x2)
    cout << "The line passing through the points (" << x1 << ", " << y1<< ") and (" << x2 << ", " << y2 << ") is x = " << x1 << " and it is a vertical line." << endl;
    else {
    m = (y2 - y1) / (x2 - x1);
    b = -m * x1 + y1;
    cout<<fixed<<showpoint<<setprecision(2);
    cout << "The line passing through the points (" << x1 << ", " << y1<< ") and (" << x2 << ", " << y2 << ") is y = "<< m << "x + " << b << endl;
    }
    if (m == 0)
        cout << "It is a horizontal line." << endl;
    else if (m > 0)
        cout << "The line is increasing." << endl;
    else
        cout << "The line is decreasing."<< endl;

    

return 0;
}
