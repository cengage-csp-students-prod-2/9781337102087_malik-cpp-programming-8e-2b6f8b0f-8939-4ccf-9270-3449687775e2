 
#include <iostream> 

#include "extRomanType.h"
 
using namespace std;
 
int main()
{
    extRomanType num1("XXXIV");
    extRomanType num2("XV");
    extRomanType num3;

    cout << "Num1 = " << num1 << endl;
    cout << "Num2 = " << num2 << endl;
    cout << "Num1 + Num2 = " << num1+num2 << endl;
    cout << "Num1 * Num2 = " << num1*num2 << endl;

    cout << "Num1 - Num2 = " << num1 - num2 << endl;
    cout << "Num2 - Num1 = " << num2 - num1 << endl;

    cout << "Enter two numbers in Roman format: ";
    cin >> num1 >> num2;
    cout << endl;

    cout << "Num1 = " << num1 << endl;
    cout << "Num2 = " << num2 << endl;

    num3 = num2 * num1;
	cout << "Num3 = " << num3 << "  ";
 //   num3.romanToPositiveInteger();
 //   num3.printDecimal();
    cout << endl;

    cout << "--num3: " << --num3 << "  ";
 //   num3.romanToPositiveInteger();
 //   num3.printDecimal();
    cout << endl;

    cout << "++num3: " << ++num3 << "  ";
  //  num3.romanToPositiveInteger();
 //   num3.printDecimal();
    cout << endl;

    cout << "Num1 = " << num1 << endl;
    cout << "Num2 = " << num2 << endl;
    cout << "Num1 + Num2 = " << num1 + num2 << endl;
    cout << "Num1 * Num2 = " << num1 * num2 << endl;
    cout << "Num1 / Num2 = " << num1 / num2 << endl;

    cout << "Num1 - Num2 = " << num1 - num2 << endl;
    cout << "Num2 - Num1 = " << num2 - num1 << endl;


    return 0;
}
