#include <iostream>
#include "cashRegister.h"

using namespace std; 

int cashRegister::getCurrentBalance() const
{
    return cashOnHand;
}

cashRegister::cashRegister(int cashIn)
{
    if (cashIn >= 0)
        cashOnHand = cashIn;
    else
        cashOnHand = 500;
}

// Define the functions to overload the '+' and '-' operators below

bool cashRegister::operator==(const cashRegister& cashR) const
{
    return (cashOnHand == cashR.cashOnHand);
}
 
bool cashRegister::operator!=(const cashRegister& cashR) const
{
    return (cashOnHand != cashR.cashOnHand);
}
 
bool cashRegister::operator<=(const cashRegister& cashR) const
{
    return (cashOnHand <= cashR.cashOnHand);
}

bool cashRegister::operator<(const cashRegister& cashR) const
{
    return (cashOnHand < cashR.cashOnHand);
}

bool cashRegister::operator>=(const cashRegister& cashR) const
{
    return (cashOnHand >= cashR.cashOnHand);
}

bool cashRegister::operator>(const cashRegister& cashR) const
{
    return (cashOnHand > cashR.cashOnHand);
}

ostream& operator<<(ostream& os, const cashRegister& cashR)
{
    os << cashR.cashOnHand;

    return os;
}
