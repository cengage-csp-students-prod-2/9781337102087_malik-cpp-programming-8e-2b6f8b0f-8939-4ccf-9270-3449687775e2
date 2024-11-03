//Logic errors.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{  
    double cost;
    double area;
    double bagSize;
    
    
    
    cout << "Enter the amount of fertilizer, in pounds, in one bag: "<<endl;
    cin >> bagSize;
    
    cout << "Enter the cost of the " << bagSize << " pound fertilizer bag: "<<endl;
    cin >> cost;

    
    cout << "Enter the area, in square feet, that can be fertilized by one bag: ";
    cin >> area;
    
    cout << "The cost of the fertilizer per pound is: $" << fixed << showpoint << setprecision(2)<< bagSize / cost << endl;
    
    cout << "The cost of fertilizing per square foot is: $"  << fixed << showpoint << setprecision(2)<<area / cost << endl;
    return 0;
}