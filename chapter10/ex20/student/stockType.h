#include <string> 

using namespace std;

class stockType  
{ 
public: 
    stockType(string n = "", string sym = "", double curP = 0.0,
              double lowP = 0.0, double highP = 0.0, double preDayClP = 0.0,
              double fTWH = 0.0, double fTWL = 0.0);

    void setStockName(string n);
    string getName() const;

    void setSymbol(string sym);
    string getSymbol() const;

    void setCurrentPrice(double curP);
    double getCurrentPrice() const;

    void setLowPriceOfTheDay(double lowP);
    double getLowPriceOfTheDay() const;

    void setHighPriceOfTheDay(double highP);
    double getHighPriceOfTheDay() const;

    void setPreviousDayClosingPrice(double preDayClP);
    double getPreviousDayClosingPrice() const;

    void setFiftyTwoWeeksHigh(double fTWH);
    double getFiftyTwoWeeksHigh() const;

    void setFiftyTwoWeeksLow(double fTWL);
    double getFiftyTwoWeeksLow() const;

    double percentGainLoss();

    void print() const; 
     
private:    
    string name; 
    string symbol; 
    double currentPrice;
    double lowPriceOfTheDay;
    double highPriceOfTheDay;
    double previousDayClosingPrice;
    double fiftyTwoWeeksHigh;
    double fiftyTwoWeeksLow;
};
