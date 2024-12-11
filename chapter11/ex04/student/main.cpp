#include <iostream>
#include <iomanip>  // For setprecision
#include "cylinderType.h"

using namespace std;

int main() {
    double radius, height, shippingCostPerLiter, paintCostPerSquareFoot;

    // Prompt user for the radius and height of the container
    cout << "Enter the radius of the container (in feet): ";
    cin >> radius;

    cout << "Enter the height of the container (in feet): ";
    cin >> height;

    // Create an object of the cylinderType class
    cylinderType container(radius, height);

    // Prompt user for the shipping cost per liter and paint cost per square foot
    cout << "Enter the shipping cost per liter: ";
    cin >> shippingCostPerLiter;

    cout << "Enter the paint cost per square foot: ";
    cin >> paintCostPerSquareFoot;

    // Calculate the volume of the cylinder in liters
    double volumeInCubicFeet = container.volume();
    double volumeInLiters = volumeInCubicFeet * 28.32;

    // Calculate the shipping cost
    double shippingCost = volumeInLiters * shippingCostPerLiter;

    // Calculate the paint cost
    double surfaceArea = container.area();
    double paintCost = surfaceArea * paintCostPerSquareFoot;

    // Output the shipping and paint costs with proper formatting
    cout << fixed << setprecision(2);
    cout << "Shipping cost: $" << shippingCost << endl;
    cout << "Paint cost: $" << paintCost << endl;

    return 0;
}
