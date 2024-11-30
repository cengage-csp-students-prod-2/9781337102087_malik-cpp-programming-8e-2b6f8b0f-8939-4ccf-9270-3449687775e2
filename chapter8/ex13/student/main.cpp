#include <iostream>
#include<iomanip>
#include<string>
#include<fstream>


using namespace std;

const int NumStds = 10;
const int NumSub = 5;

void getData(fstream& inf, string n[], double mark[][NumSub] ){

for (int i = 0 ; i< NumStds; i++){
    inf >> n[i];
    for (int j=0; j< NumSub; j++){
        inf>> mark[i][j];
    }
}


}

void calculateAverageGrade(double testaverage[], string grade[], double mark[][NumSub]){

for (int subj =0 ; subj < NumSub; subj++){
    double sum = 0.0;
    for ( int nam = 0; nam < NumStds; nam++ ){
        sum += mark[subj][nam];
    }
    testaverage[subj] = sum;
}

for (int nam = 0; nam < NumStds; nam++){
    double sum = 0.0;
    double per = 0.0;
    for (int subj =0 ; subj < NumSub; subj++  ){
        sum += mark[nam][subj];
    }
    per  = sum/5;
    if (per >=90 && per <= 100){
        grade[nam] = "A";
    }
    
    else if (per >=80 && per <= 89.99)
    {
       grade[nam] = "B";
    }
    else if (per >=70 && per <= 79.99)
    {
       grade[nam] = "C";
    }
    else if (per >=60 && per <= 69.99)
    {
       grade[nam] = "D";
    }
    else{
        grade[nam] = "E";
    }
    


    

}
}

void output(string n[], double mark[][NumSub], double testaverage[], string grade[]){

cout<<fixed<<showpoint<<setprecision(2);

// Print header
   cout << left << setw(12) << "Name";
   for (int day = 1; day <= NumSub; day++) {
       cout << setw(8) << ("Mark " + to_string(day));
   }
   cout << endl;


   // Print student data
   for (int i = 0; i < NumStds; i++) {
       cout << left << setw(12) << n[i];  // student name
       for (int j = 0; j < NumSub; j++) {
           cout << setw(8) << mark[i][j];  // Mark for each day
       }
       cout << endl;
   }


   // Print test averages
   cout << "\nDaily Averages:" << endl;
   cout << left << setw(12) << " ";
   for (int day = 0; day < NumSub; day++) {
       cout << setw(8) << testaverage[day];
   }
   cout << endl;


// Print grade 
   cout << "\n Grade:" << endl;
   cout << left << setw(12) << " ";
   for (int day = 0; day < NumStds ; day++) {
       cout << setw(8) << grade[day];
   }
   cout << endl;


}

int main() {
    // Write your main here
    string names[NumStds];
    double marks[NumStds][NumSub];
    string grade[NumStds];
    double testaverage[NumSub];

    fstream inFile;
    inFile.open("ch8_Ex13Data.txt");
    getData(inFile, names, marks );


    calculateAverageGrade( testaverage, grade, marks);

    output(names, marks, testaverage, grade);



    return 0;
}
