#include <iostream>
#include <cmath>    // For the ceil function
#include <iomanip>  // For setting decimal precision

using namespace std;

int main() {
    double milk_rate = 3.78;           // Capacity of each milk carton in liters
    double milk_one_litre = 0.38;      // Cost of producing one liter of milk
    double profit_carton = 0.27;       // Profit per carton of milk
    double total_milk;                 // Total milk produced in liters

    cout << "Enter the total amount of milk produced in the morning: ";
    cin >> total_milk;

    // Calculations
    int cartons_needed = ceil(total_milk / milk_rate);  // Number of cartons needed, rounded up
    double production_cost = milk_one_litre * total_milk;
    double production_profit = cartons_needed * profit_carton;

    // Output results with formatting
    cout << "The number of milk cartons needed to hold the milk = " << cartons_needed << endl;
    cout << "The cost of producing the milk = " << fixed << setprecision(2) << production_cost << endl;
    cout << "The profit for producing the milk = " << fixed << setprecision(2) << production_profit << endl;

    return 0;
}