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
    double discount=0.0;
    double discount_on_each_room;
    double discount_no_of_room;
    double discount_in_percent;
    double total_cost;
    double after_sales_tax;
    double billing_amount;

    cout<<fixed<<showpoint<<setprecision(2);

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
        discount =  ( TEN_TO_NINTEEN_ROOMS_DIS );
    else if( no_of_rooms >=20 && no_of_rooms<30)
        discount = TWENTY_TO_TWENTYNINE_ROOMS_DIS;
    else if( no_of_rooms >=30)
        discount = THIRTY_OR_MORE_ROOMS_DISC;
    else{
        cout<<"No discount availiable according to no of rooms booked."<<endl;
    }
    if (no_of_days>=3)
        discount_no_of_room = THREE_DAYS_ROOM_DISC;
    

   

    discount_in_percent = ((discount+discount_no_of_room));
    discount_on_each_room = cost_of_room *discount_in_percent;

    cout<<"The discount on each room as a percent is "<<discount_in_percent*100<<endl;
    cout<<"The number of rooms booked are "<<no_of_rooms<<endl;
    cout<<"the number of days the rooms booked are "<<no_of_days<<endl;

    total_cost = (cost_of_room-discount_on_each_room)* no_of_days * no_of_rooms;


    cout<<"The total cost of the rooms "<< total_cost<<endl;
    after_sales_tax = total_cost*(sales_tax/100);
    cout<<"The sales tax is "<< after_sales_tax<<endl;

    billing_amount = total_cost+ after_sales_tax;
    cout<<"The total billing amount is "<<billing_amount<<endl;

    return 0;
}