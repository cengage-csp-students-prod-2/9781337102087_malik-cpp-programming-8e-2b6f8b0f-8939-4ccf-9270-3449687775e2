//*************************************************************

// Author: D.S. Malik
//
// Program: nth Fibonacci number
// Given the first two numbers of a Fibonacci sequence, this
// determines and outputs the desired number of the Fibonacci
// sequence.
//*************************************************************

#include <iostream>

using namespace std;

int main()

{

//Declare variables

int previous1;

int previous2;

int current;

int counter;

int nthFibonacci;

cout << "Enter the first two Fibonacci numbers: "; //Step 1

cin >> previous1 >> previous2; //Step 2

cout << endl;

cout << "The first two Fibonacci numbers are " << previous1 << " and " << previous2 << endl; //Step 3

cout << "Enter the position of the desired Fibonacci number: " ; //Step 4

cin >> nthFibonacci; //Step 5

cout << endl;

if (nthFibonacci == 1) //Step 6.a

    current = previous1;

else if (nthFibonacci == 2) //Step 6.b

    current = previous2;

else //Step 6.c

{

    counter = 3;
    //Steps 6.c.2 – 6.c.5

    while (counter <= nthFibonacci)

    {

        current = previous2 + previous1;
        previous1 = previous2;
        previous2 = current;
        counter++;

     }//end while

}//end else
    
    /* Output the Fibonacci number at nth position */

return 0;

}//end main