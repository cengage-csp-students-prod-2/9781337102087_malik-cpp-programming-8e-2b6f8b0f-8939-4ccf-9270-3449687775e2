#include <iostream>
#include<string>

using namespace std;

int main() {
    int firstNum, secondNum;
    
    cout<<"Input two positvie num first num should be smallar";
    cin>>firstNum;
    cout<<" ";
    cin>>secondNum;
    int a = firstNum;
    int sum = 0;
    int sum_odd_sqr = 0;
    while (a<= secondNum){
        if (a%2 == 1){
            cout<<a<<" ";
            sum_odd_sqr = sum_odd_sqr + (a*a);
        } else{
            sum  = sum + a;

        }
        a++;

    }
    cout<<endl;
    cout<<"The sum of all even numbere between "<<firstNum<<" and "<<secondNum<<" is "<< sum<<endl;
    for(int i =1; i<11; i++){
        cout<<i*i<<" ";
    }
    cout<<firstNum<<" "<<secondNum<<endl;
    cout<<"the sum of the square of the odd numbers between "<<firstNum<<" and "<<secondNum<<" is "<< sum_odd_sqr<<endl;
    string word = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int count =0;
    while (count<=26){
        cout<<word[count]<<" ";
        count++;
    }

    return 0;
}