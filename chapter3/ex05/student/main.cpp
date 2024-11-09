#include <iostream>
#include <fstream>
#include<ios>
#include<string>
#include <iomanip>
// Declared header files
using namespace std;

int main() {
// Declaring file objects and local variables
    fstream inFile; //for. input file
    fstream outFile; // for output file

    string firstName; // for first name
    string lastName; //for lastname
    string fileName; // for fileName for output
    int salary;
    int increasedRate;
    int updatedSalary;

    // Request the filename for output
    // cout<<"Enter the file name for output: "<< endl;
    // cin>>fileName;

    inFile.open("Ch3_Ex5Data.txt");
    outFile.open("Ch3_Ex5Output.dat");
    //set the precision for the output file
    outFile<<fixed<<showpoint<<setprecision(2);
    if(inFile.is_open()){
        while (inFile.good() ){
        // read the data from file 
            
            inFile>>lastName;
            inFile>>firstName;
            inFile>>salary;
            inFile>> increasedRate;

            // calculating Updating salary

            updatedSalary = salary *( 1 + increasedRate / 100 );

            // Writibg the data to the outputfile

            outFile<< firstName;
            outFile<< lastName ;
            outFile<< updatedSalary ;
        

        }
    }
    inFile.close();
    outFile.close();





    // Write your main here
    return 0;
}
