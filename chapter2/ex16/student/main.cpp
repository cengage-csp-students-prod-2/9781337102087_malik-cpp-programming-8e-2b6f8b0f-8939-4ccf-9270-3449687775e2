#include <iostream>

using namespace std;

int main() {
    // Write your main here
    double milk_rate = 3.78;
    double milk_one_litre = 0.38;
    double profit_carton = 0.27;
    double amount;
    cout<<"Enter the total amount of milk produced in the morning"<<endl;
    cin>>amount;
    int newCartons = static_cast<int>(amount / milk_rate);

    cout<<"The number of milk cartoons needed to hold the milk = "<< newCartons <<endl;
    cout<<"THe cost of producing the milk = "<< milk_one_litre *amount<<endl;
    cout<<"The profit for producing the milk = "<< profit_carton * (amount / milk_rate)<<endl;


    return 0;
    
}