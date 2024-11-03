#include <iostream>
#include<cmath> 
using namespace std;

int main() {
    // Write your main here
    double milk_rate = 3.78;
    double milk_one_litre = 0.38;
    double profit_carton = 0.27;
    double total_milk;
    cout<<"Enter the total amount of milk produced in the morning"<<endl;
    cin>>total_milk;
    double newCartons = ceil(total_milk / milk_rate);
    double production_cost = milk_one_litre * total_milk;
    double productin_profit = newCartons * profit_carton;
    cout<<"The number of milk cartoons needed to hold the milk = "<< newCartons <<endl;
    cout<<"THe cost of producing the milk = "<< production_cost<<endl;
    cout<<"The profit for producing the milk = "<< productin_profit <<endl;


    return 0;

}