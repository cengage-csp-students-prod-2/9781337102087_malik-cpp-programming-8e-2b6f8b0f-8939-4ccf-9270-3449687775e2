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
    
    cout<<"The number of milk cartoons needed to hold the milk = "<< newCartons <<endl;
    cout<<"THe cost of producing the milk = "<< milk_one_litre * total_milk<<endl;
    cout<<"The profit for producing the milk = "<< newCartons * profit_carton <<endl;


    return 0;

}