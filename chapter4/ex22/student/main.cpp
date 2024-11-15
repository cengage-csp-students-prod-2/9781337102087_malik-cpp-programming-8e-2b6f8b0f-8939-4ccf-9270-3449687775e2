#include <iostream>
#include<iomanip>


using namespace std;

int main() {
    int num;
    int numbers[] = {2,3,5,7,11,13,17,19,23,29,31};
    cout<<"Enter a num betwen 1-1000: "<<endl;
    cin>>num;
    int c = 0;
    for(int i=0;i<11;i++){
        cout<<numbers[i]<<endl;
        if(num % numbers[i]==0){
            cout<<numbers[i];
            c = c+1;}
    }
    if(c== 1){
        cout<<"The num is prime"<<endl;
    }
    else{
        cout<<"The num is non-proime number: ";
        for(int i=1;i<11;i++){
            cout<<numbers[i];
    }}

    return 0;
}