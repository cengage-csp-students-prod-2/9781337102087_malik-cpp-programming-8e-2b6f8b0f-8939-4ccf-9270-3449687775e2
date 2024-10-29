  
#include <iostream> 
#include <fstream>
#include <string> 
#include <iomanip> 

using namespace std; 

int main()  
{  
    string name;  
    int numOfVolunteers;  
    int numOfBoxesSold;  
    int totalNumOfBoxesSold;  
    double costOfOneBox;  

    ifstream inFile;

    inFile.open("Ch5_Ex19Data.txt");

    if (!inFile)
    {
        cout << "Unable to open the input file. The program terminates!" << endl;
        return 1;
    }

    cout << fixed << showpoint << setprecision(2);   
    
    cout << "Processing data." << endl;    

    totalNumOfBoxesSold = 0; 
    numOfVolunteers = 0; 

    inFile >> costOfOneBox;   
 
    inFile >> name;   

    while (inFile)  
    {   
        inFile >> numOfBoxesSold;  
        totalNumOfBoxesSold = totalNumOfBoxesSold 
                              + numOfBoxesSold;   
        numOfVolunteers++;   
        inFile >> name;  
    }    

    cout << endl;      

    cout << "The total number of boxes sold: "
         << totalNumOfBoxesSold << endl;    

    cout << "The total money made by selling cookies: $" 
         << totalNumOfBoxesSold * costOfOneBox << endl;  

    if (numOfVolunteers != 0) 
        cout << "The average number of boxes sold by each volunteer: "
             << totalNumOfBoxesSold / numOfVolunteers << endl;     
    else            
        cout << "No input." << endl;    

    inFile.close();

    return 0;    
}   
