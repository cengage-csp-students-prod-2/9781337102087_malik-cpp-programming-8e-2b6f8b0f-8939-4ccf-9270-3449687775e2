#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

const int NUM_DAYS = 7;
const int RUNNERS = 5;


void getData(fstream& inf, string n[], double runData[][NUM_DAYS], int count){

for ( int i =0 ; i< RUNNERS ; i++){
    inf >> n[i];
    for (int j =0 ; j< NUM_DAYS; j++){
        inf >> runData[i][j];
    }
}
       
      

     


}
void calculateAverage(double runData[][NUM_DAYS] , double dailyAverage[]){
    for (int days = 0; days< NUM_DAYS; days++){
        double sum = 0.0;
        for (int j = 0 ; j < RUNNERS;j++){
            sum += runData[j][days];
        }
        dailyAverage[days] = sum/RUNNERS;
    }
}



void print(string n[], double runData[][NUM_DAYS] , double dailyAverage[]){
    cout << fixed << setprecision(2);
    for (int i = 0; i < RUNNERS; i++) {
        cout <<  n[i] ;
        for (int j = 0; j < NUM_DAYS; j++) {
            cout <<" "<< runData[i][j] << " ";
        }
        cout << endl;
    }

    // Print daily averages
    // cout << "\nDaily Average Miles:" << endl;
    for (int i = 0; i < RUNNERS; i++) {
        cout <<  n[i] ;
        for (int day = 0; day < NUM_DAYS; day++) {
            cout << dailyAverage[day] ;
        } 
    }
}



  
int main()
{
    string names[RUNNERS];
    double runningData[RUNNERS][NUM_DAYS];
    double dailyAverage[NUM_DAYS];
    

    fstream inFile;
    
    inFile.open("ch8_Ex12Data.txt");
    if (!inFile){
        cerr<<"File can't opened."<<endl;
        return 1;
    }
    
  
    getData(inFile, names, runningData, RUNNERS);

    calculateAverage(runningData ,  dailyAverage);

    print(names, runningData,  dailyAverage);
    
    
    inFile.close();

    
	return 0;
}