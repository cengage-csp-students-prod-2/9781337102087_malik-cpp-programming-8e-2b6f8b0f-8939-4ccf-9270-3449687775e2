#include <iostream>

#include <cmath>

#include <string>

#include "largeIntegers.h"

 

using namespace std;

 

largeIntegers::largeIntegers()

{

    number = new int[1];

    numOfDigits = 1;

    number[0] = 0;

    sign = '+';

}

 

largeIntegers::largeIntegers(int list[], int length, char numSign)

{

    numOfDigits = length;

    sign = numSign;

 

    number = new int[numOfDigits];

 

    for (int i = 0; i < numOfDigits; i++)

        number[i] = list[i];

}

 

void largeIntegers::copyNum(const largeIntegers& right)

{

    numOfDigits = right.numOfDigits;

    sign = right.sign;

 

    number = new int[numOfDigits];

 

    for (int i = 0; i < numOfDigits; i++)

        number[i] = right.number[i];

}

 

void largeIntegers::printNum(ostream& os)

{

    if (sign == '-')

        os << '-';

 

    for (int i = numOfDigits - 1; i >= 0; i--)

        os << number[i];

}

 

void largeIntegers::getNum(istream& is)

{

    int index;

    int strIndex;

    string numStr;

 

    cout << "Enter an integer: ";

    is.get(sign);

 

    if (sign != '-')

    {

        is.putback(sign);

        sign = '+';

    }

 

    is >> numStr;

    cout << endl;

 

    numOfDigits = numStr.length();

 

    number = new int[numOfDigits];

    index = 0;

 

    for (strIndex = numStr.length() - 1; strIndex >= 0; strIndex--)

    {

        number[index] = static_cast<int> (numStr.at(strIndex)) -

                            static_cast<int> ('0');

        index++;

    }

 

    char discard;

    is.get(discard);

}

 

void largeIntegers::setNum(int list[], int length)

{

    numOfDigits = length;

 

    if (number != NULL)

        delete number;

 

    number = new int[numOfDigits];

       

    for (int i = 0; i < numOfDigits; i++)

        number[i] = list[i];

}

 

bool largeIntegers::equal(const largeIntegers& right) const

{

    if (sign != right.sign)

        return false;

    else if (numOfDigits != right.numOfDigits)

        return false;

    else

    {

        for (int i = numOfDigits - 1; i >= 0; i--)

            if (number[i] != right.number[i])

                return false;

        return true;

    }

}

 

bool largeIntegers::notEqual(const largeIntegers& right) const

{

    return !(this->equal(right));

}

 

bool largeIntegers::greaterThan(const largeIntegers& right) const

{

    if (sign == '+' && right.sign == '-')

        return true;

    else if (sign == '-' && right.sign == '+')

        return false;

    else

    {

        if (numOfDigits > right.numOfDigits)

        {

            if (sign == '+')

                return true;

            else

                return false;

        }

        else if (numOfDigits < right.numOfDigits)

        {

            if (sign == '+')

                return false;

            else

                return true;

        }

        else

        {

            if (this->equal(right))

                return false;

            else

            {

                bool isGreater = true;

 

                for (int index = numOfDigits - 1; index >= 0; index --)

                    if (number[index] < right.number[index])

                    {

                        isGreater = false;

                        break;

                    }

 

                if (isGreater == true)

                {

                     if (sign == '+')

                        return true;

                    else

                        return false;

                }

                else

                {

                    if (sign == '+')

                        return false;

                    else

                        return true;

                }

            }

        }

    }

}

 

bool largeIntegers::lessThan(const largeIntegers& right) const

{

    return (this->notEqual(right) && !(this->greaterThan(right)));

}

 

bool largeIntegers::lessOrEqualTo(const largeIntegers& right) const

{

    return (this->equal(right) || this->lessThan(right));

}

 

bool largeIntegers::greaterOrEqualTo(const largeIntegers& right) const {
    return (this->equal(right) || this->greaterThan(right));
}

largeIntegers largeIntegers::add(const largeIntegers& num) {
    largeIntegers temp;

    if (sign == num.sign) {
        temp = sumNum(num);
        temp.sign = sign;
    }
    else {
        largeIntegers temp1; // = *this;
        largeIntegers temp2; 
        temp1.copyNum(*this);
        temp2.copyNum(num);
        temp1.sign = '+';
        temp2.sign = '+';
        if (temp1.greaterOrEqualTo(temp2)) {
            temp = temp1.subtractNum(temp2);
            temp.sign = sign;
        }
        else {
            temp = temp2.subtractNum(temp1);
            temp.sign = num.sign;
        }
    }
    return temp;
}
largeIntegers largeIntegers::subtract(const largeIntegers& num) {
    int digits = max(numOfDigits, num.numOfDigits);
    largeIntegers temp;
    temp.number = new int[digits];
    if (sign != num.sign) {
        temp = (*this).sumNum(num);
        temp.sign = sign;
    }
    else {
        largeIntegers temp1;  // = *this;
        largeIntegers temp2;  // = num;
        temp1.copyNum(*this);
        temp2.copyNum(num);
        temp1.sign = '+';
        temp2.sign = '+';
        if (temp1.greaterOrEqualTo(temp2)) {
            temp = temp1.subtractNum(temp2);
            temp.sign = sign;
        }
        else {
            temp = temp2.subtractNum(temp1);
            if (num.sign == '-')
                temp.sign = '+';
            else
                temp.sign = '-';
        }
    }
    return temp;
}
largeIntegers largeIntegers::multiply(const largeIntegers& num) {
    largeIntegers numZero;
    if (num.equal(numZero))
        return numZero;
    else {
        largeIntegers temp;
        largeIntegers temp1;
        for (int index2 = 0; index2 < num.numOfDigits; index2++) {
            temp1 = multiplyDigit(num.number[index2]);
            largeIntegers newTemp;
            newTemp.number = new int[temp1.numOfDigits + index2];
            newTemp.numOfDigits = temp1.numOfDigits + index2;
            for (int i = 0; i < index2; i++)
                newTemp.number[i] = 0;
            int temp1Index = 0;
            for (int i = index2; i < newTemp.numOfDigits; i++)
                newTemp.number[i] = temp1.number[temp1Index++];
            temp.sign = newTemp.sign; 
            temp = temp.add(newTemp);
        }
        if (sign == num.sign)

            temp.sign = '+';
        else
            temp.sign = '-';
        return temp;
    }
}
largeIntegers largeIntegers::sumNum(const largeIntegers& num) {
    int digits = max(numOfDigits, num.numOfDigits) + 1;
    largeIntegers temp;
    temp.number = new int[digits];
    int sumDigits;
    int index1 = 0;
    int index2 = 0;
    int index = 0;
    int carry = 0;
    while (index1 < numOfDigits && index2 < num.numOfDigits) {
        sumDigits = number[index1] + num.number[index2] + carry;
        if (sumDigits < 10) {
            temp.number[index] = sumDigits;
            carry = 0;
        }
        else {
            temp.number[index] = sumDigits - 10;
            carry = 1;
        }
        index++;
        index1++;
        index2++;
    }
    if (index1 < numOfDigits)
        for (int i = index1; i < numOfDigits; i++) {
            sumDigits = number[i] + carry;
            if (sumDigits <= 9) {
                temp.number[index] = sumDigits;
                carry = 0;
            }
            else {
                temp.number[index] = sumDigits - 10;
                carry = 1;
            }
            index++;
        }
    else if (index2 < num.numOfDigits)
        for (int i = index2; i < num.numOfDigits; i++) {
            sumDigits = num.number[i] + carry;
            if (sumDigits <= 9) {
                temp.number[index] = sumDigits;
                carry = 0;
            }
            else  {
                temp.number[index] =  sumDigits - 10;
                carry = 1;
            }
            index++;
        }
    if (carry == 1) {
        temp.number[index] = 1;
        index++;;
    } 
    temp.numOfDigits = index; 
    return temp;
}
largeIntegers largeIntegers::subtractNum(const largeIntegers& num) {
    int digits = max(numOfDigits, num.numOfDigits);
    largeIntegers temp;
    largeIntegers tempNum;
    tempNum.copyNum(*this);  //copy this number into tempNum,
                             //because this number might be changed
    temp.number = new int[digits];
    int differenceDigits;
    int index1 = 0;
    int index2 = 0;
    int index = 0;
    while (index1 < numOfDigits && index2 < num.numOfDigits) {
        if (tempNum.number[index1] >= num.number[index2])
            differenceDigits = tempNum.number[index1] - num.number[index2];
        else  {

            differenceDigits = 10 + tempNum.number[index1] - num.number[index2];
            int i = index1 + 1;
            while (tempNum.number[i] == 0)
                tempNum.number[i++] = 9; 
            tempNum.number[i] = tempNum.number[i] - 1;
        }
        temp.number[index] = differenceDigits;
        index++;
        index1++;
        index2++;

    }
    if (index1 < numOfDigits) {

        for (int i = index1; i < numOfDigits; i++) {
             temp.number[index] = tempNum.number[i];
             index++;
        }
        temp.numOfDigits = numOfDigits;
    }
    else if (index2 < num.numOfDigits)   {

        for (int i = index2; i < num.numOfDigits; i++) {
             temp.number[index] = num.number[i];
             index++;
        }
        temp.numOfDigits = num.numOfDigits;
    }
    else
        temp.numOfDigits = numOfDigits;

    while (temp.number[temp.numOfDigits - 1] == 0 && temp.numOfDigits >= 0)
        temp.numOfDigits--;
    if (temp.numOfDigits == 0) {
        temp.number[0] = 0;
        temp.numOfDigits = 1;
    }
    return temp;
}
largeIntegers largeIntegers::multiplyDigit(int digit) {
    largeIntegers temp;

    if (digit != 0) {
        temp.number = new int[numOfDigits + 1];
        int carry = 0;
        int multNum;
        int index = 0;
        for (int i = 0; i < numOfDigits; i++) {
            multNum = number[i] * digit + carry;
            carry = multNum / 10;
            temp.number[index++] = multNum % 10;
        }
        if (carry != 0)
            temp.number[index++] = carry;
        temp.numOfDigits = index;
    }
    return temp;
}
int largeIntegers::max(int a, int b) {
    if (a >= b)
        return a;
    else
        return b;
}