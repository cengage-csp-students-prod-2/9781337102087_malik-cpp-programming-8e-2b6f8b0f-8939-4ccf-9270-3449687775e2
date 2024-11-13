#include <iostream>
#include<iomanip>
#include<cmath>


using namespace std;

int main() {
    // Write your main here
    const double TWENTY_TO_TWENTYNINE_ROOMS_DIS = 0.20;
    const double TEN_TO_NINTEEN_ROOMS_DIS = 0.10;
    const double THIRTY_OR_MORE_ROOMS_DISC = 0.30;
    const double THREE_DAYS_ROOM_DISC = 0.05;


    int no_of_rooms;
    int no_of_days;
    double cost_of_room;
    double sales_tax;
    double discount;
    double discount_on_each_room;
    double discount_no_of_room;
    double discount_in_percent;
    double total_cost;
    double after_sales_tax;
    double billing_amount;

    cout<<"The cost of renting one room are: "<<endl;
    cin>>cost_of_room;

    cout<<"The number of rooms booked are: "<<endl;
    cin>>no_of_rooms;

    cout<<"The number of days booked are: "<<endl;
    cin>>no_of_days;

    cout<<"The sales task in percentage: "<<endl;
    cin>>sales_tax;

    // output
    cout<<"The cost of renting one room are: "<<cost_of_room<<endl;
    if (no_of_rooms >=10 && no_of_rooms < 20 )
        discount = cost_of_room * ( TEN_TO_NINTEEN_ROOMS_DIS /100);
    else if( no_of_rooms >=20 && no_of_rooms<30)
        discount = cost_of_room*( TWENTY_TO_TWENTYNINE_ROOMS_DIS/100);
    else if( no_of_rooms >=30)
        discount = cost_of_room*(THIRTY_OR_MORE_ROOMS_DISC/100);
    else{
        discount = 0;
        cout<<"No discount availiable according to no of rooms booked."<<endl;
    }
    if (no_of_days>=3)
        discount_no_of_room = cost_of_room*(THREE_DAYS_ROOM_DISC/100);
    else
        discount_no_of_room = 0;

    discount_on_each_room = ((discount+discount_no_of_room)/no_of_rooms);

    discount_in_percent = discount_on_each_room * 100/ cost_of_room;

    cout<<"The discount on each room as a percent is "<<discount_in_percent<<endl;
    cout<<"The number of rooms booked are "<<no_of_rooms<<endl;
    cout<<"the number of days the rooms booked are "<<no_of_rooms<<endl;

    total_cost = (cost_of_room - discount_on_each_room) * no_of_days * no_of_rooms;


    cout<<"The total cost of the rooms "<< total_cost<<endl;
    after_sales_tax = total_cost*(sales_tax/100);
    cout<<"The sales tax is "<< after_sales_tax<<endl;

    billing_amount = total_cost*(1+ sales_tax/100);
    cout<<"The total billing amount is "<<billing_amount<<endl;


    
    
    
    




    return 0;
}