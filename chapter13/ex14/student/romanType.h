//Roman Num Header file
  
#include <string> 
using namespace std;

class romanType
{
public:
    void setRoman(string);
    void romanToPositiveInteger();
    void printPositiveInteger() const;
    void printRoman() const;
    romanType();
    romanType(string);

private:
    string romanNum;
    int num;
};
