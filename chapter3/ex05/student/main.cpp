#include <iostream>
#include <fstream>
#include<ios>
#include<string>
#include <iomanip>
#include<cmath>
// Declared header files
using namespace std;

int main() {
// Declaring file objects and local variables
    fstream inFile; //for. input file
    fstream outFile; // for output file

    string firstName; // for first name
    string lastName; //for lastname
    string fileName; // for fileName for output
    float salary;
    float increasedRate;
    double updatedSalary;

    // Request the filename for output
    // cout<<"Enter the file name for output: "<< endl;
    // cin>>fileName;

    inFile.open("testFileData.txt",ios::in);
    // inFile.open("Ch3_Ex5Data.txt",ios::in);
    outFile.open("Ch3_Ex5Output.dat", ios::out);
    //set the precision for the output file
    outFile <<fixed <<setprecision(2)<<endl;
    if(!outFile){
        cout<<"File creation failed";

    }
    else{
        cout<<"New file created \n";
        
    }


    
    
    if(!inFile or !outFile){
        cout<<"No such file";        
    }
    else{
        // read the data from file 
        while(inFile){
            inFile>>lastName;
            inFile>>firstName;
            inFile>>salary;
            inFile>>increasedRate;


            
            cout<<increasedRate;
            // calculating Updating salary
       
            updatedSalary = salary * ( 1 + increasedRate / 100 );
            
        
            // Writibg the data to the outputfile

            outFile<< firstName<<" ";
            outFile<< lastName <<" ";
            outFile<< updatedSalary<<endl ;
        

        }    
    }
    inFile.close();
    outFile.close();





    // Write your main here
    return 0;
}
