#ifndef H_largeIntegers
#define H_largeIntegers  
#include <iostream>
using namespace std;

class largeIntegers {
public:
    void setNum(int list[], int length);
    void printNum(ostream&);
    void getNum(istream&);
    void copyNum(const largeIntegers& right);
    bool equal(const largeIntegers& right) const;
    bool notEqual(const largeIntegers& right) const;
    bool greaterThan(const largeIntegers& right) const;
    bool lessThan(const largeIntegers& right) const;
    bool lessOrEqualTo(const largeIntegers& right) const;
    bool greaterOrEqualTo(const largeIntegers& right) const;
    largeIntegers add(const largeIntegers& num);
    largeIntegers subtract(const largeIntegers& num); 
    largeIntegers multiply(const largeIntegers& num);
    largeIntegers();
    largeIntegers(int list[], int length = 0, char numSign = '+');
      //constructor
private:
    largeIntegers sumNum(const largeIntegers& num);
    largeIntegers subtractNum(const largeIntegers& num);
      //This function assumes that this number is greater than or
      //equal to num
    largeIntegers multiplyDigit(int digit);
    int max(int a, int b);
    int *number;
    int numOfDigits;
    char sign;
//    int maxNumOfDigits;
};
#endif