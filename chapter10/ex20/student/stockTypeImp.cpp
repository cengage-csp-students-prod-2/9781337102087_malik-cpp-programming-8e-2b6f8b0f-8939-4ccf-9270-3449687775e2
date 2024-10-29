#include <iostream> 
#include <string>
#include <iomanip>
#include "stockType.h"

using namespace std;

stockType::stockType(string n, string sym, double curP,
                     double lowP, double highP, double preDayClP,
                     double fTWH, double fTWL)
{
    name = n;
    symbol = sym;

    if (curP >= 0.0)
        currentPrice = curP;
    else
        currentPrice = 0.0;

    if (lowP >= 0.0)
        lowPriceOfTheDay = lowP;
    else
        lowPriceOfTheDay = 0.0;

    if (highP >= 0.0)
        highPriceOfTheDay = highP;
    else
        highPriceOfTheDay = 0.0;

    if (preDayClP >= 0.0)
        previousDayClosingPrice = preDayClP;
    else
        previousDayClosingPrice = 0.0;

    if (fTWH >= 0.0)
        fiftyTwoWeeksHigh = fTWH;
    else
        fiftyTwoWeeksHigh = 0.0;

    if (fTWL >= 0.0)
        fiftyTwoWeeksLow = fTWL;
    else
        fiftyTwoWeeksLow = 0.0;
}

void stockType::setStockName(string n)
{
    name = n;
}

string stockType::getName() const
{
    return name;
}

void stockType::setSymbol(string sym)
{
    symbol = sym;
}

string stockType::getSymbol() const
{
    return symbol;
}


void stockType::setCurrentPrice(double curP)
{
    if (curP >= 0.0)
        currentPrice = curP;
    else
        currentPrice = 0.0;
}

double stockType::getCurrentPrice() const
{
    return currentPrice;
}


void stockType::setLowPriceOfTheDay(double lowP)
{
    if (lowP >= 0.0)
        lowPriceOfTheDay = lowP;
    else
        lowPriceOfTheDay = 0.0;
}

double stockType::getLowPriceOfTheDay() const
{
    return lowPriceOfTheDay;
}

void stockType::setPreviousDayClosingPrice(double preDayClP)
{
    if (preDayClP >= 0.0)
        previousDayClosingPrice = preDayClP;
    else
        previousDayClosingPrice = 0.0;
}
double stockType::getPreviousDayClosingPrice() const
{
    return previousDayClosingPrice;
}

void stockType::setHighPriceOfTheDay(double highP)
{
    if (highP >= 0.0)
        highPriceOfTheDay = highP;
    else
        highPriceOfTheDay = 0.0;
}

double stockType::getHighPriceOfTheDay() const
{
    return highPriceOfTheDay;
}


void stockType::setFiftyTwoWeeksHigh(double fTWH)
{
    if (fTWH >= 0.0)
        fiftyTwoWeeksHigh = fTWH;
    else
        fiftyTwoWeeksHigh = 0.0;
}

double stockType::getFiftyTwoWeeksHigh() const
{
    return fiftyTwoWeeksHigh;
}


void stockType::setFiftyTwoWeeksLow(double fTWL)
{

    if (fTWL >= 0.0)
        fiftyTwoWeeksLow = fTWL;
    else
        fiftyTwoWeeksLow = 0.0;
}

double stockType::getFiftyTwoWeeksLow() const
{
    return fiftyTwoWeeksLow;
}

double stockType::percentGainLoss()
{
    double diff;

    diff = currentPrice - previousDayClosingPrice;

    return diff / previousDayClosingPrice * 100;
}

void stockType::print() const
{
    cout << "Name: " << name << endl;
    cout << "Symbol: " << symbol << endl;
    cout << "Current Price: " << currentPrice << endl;
    cout << "Low Price Of The Day: " << lowPriceOfTheDay << endl;
    cout << "High Pric eOf The Day: " << highPriceOfTheDay << endl;
    cout << "Previous Day Closing Price: " << previousDayClosingPrice << endl;
    cout << "Fifty Two Weeks High: " << fiftyTwoWeeksHigh << endl;
    cout << "Fifty Two Weeks Low: " << fiftyTwoWeeksLow << endl;
}
