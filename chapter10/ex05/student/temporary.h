
#include <string> 

using namespace std;

class temporary
{
public:
    void set(string, double, double);
    void print();
    double manipulate();
    void get(string&, double&, double&);
    void setDescription(string);
    void setFirst(double);
    void setSecond(double); 
    string getDescription() const;
    double getFirst() const;
    double getSecond() const;

    temporary(string = "", double = 0, double = 0);

private:
    string description;
    double first;
    double second;
};