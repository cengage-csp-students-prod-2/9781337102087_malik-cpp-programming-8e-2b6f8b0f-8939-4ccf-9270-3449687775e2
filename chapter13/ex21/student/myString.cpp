//Implementation file myStringImp.cpp
#include <iostream> 
#include <iomanip>
#include <cstring>
#include <cassert>
#include "myString.h" 
   
using namespace std; 

const newString& newString::operator+=(const newString& rightStr)
{
    strConcat(strPtr, rightStr.strPtr);

    strLength = strlen(strPtr);

    return *this;
}

const newString& newString::operator+=(char ch)
{
    char chStr[2];

    chStr[0] = ch;
    chStr[1] = '\0';

    strConcat(strPtr, chStr);
    strLength = strlen(strPtr);

    return *this;
}

newString newString::operator+(const newString& rightStr)
{
    newString temp = *this;

    strConcat(temp.strPtr, rightStr.strPtr);

    temp.strLength = strlen(temp.strPtr);

    return temp;
}

newString newString::operator+(char ch)
{
    newString temp = *this;

    char chStr[2];

    chStr[0] = ch;
    chStr[1] = '\0';

    strConcat(temp.strPtr, chStr);

    temp.strLength = strlen(temp.strPtr);

    return temp;
}

char* newString::strConcat(char *str2)
{
    char *str;

    int len1 = strLength;
    int len2 = strlen(str2);

    int len = strLength + len2;

    str = new char[len + 1];

    for (int i = 0; i < len1; i++)
        str[i] = strPtr[i];
    for (int i = len1; i < len; i++)
        str[i] = str2[i - len1];
    str[len] = '\0';

    return str;
}

char* newString::strConcat(char * &str1, const char *str2)
{
    char *temp;
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    temp = new char[strlen(str1) + 1];
    strcopy(temp, str1);

    delete [] str1;

    str1 = new char[len1 + len2 + 1];

   for (int i = 0; i < len1; i++)
            str1[i] = temp[i];
    for (int i = len1; i < len1 + len2; i++)
        str1[i] = str2[i - len1];

    str1[len1 + len2] = '\0';

    return str1;
}

int newString::length()
{
    return strLength;
}


    //Constructor: conversion from the char string to newString
newString::newString(const char *str) 
{
    strLength = strlen(str);
    strPtr = new char[strLength + 1]; //allocate memory to  
                                      //store the char string
    strcopy(str);
}

    //Default constructor to store the null string
newString::newString() 
{
    strLength = 0;
    strPtr = new char[1];
    strPtr[0] = '\0';
}

    //copy constructor
newString::newString(const newString& rightStr)  
{
    strLength = rightStr.strLength;
    strPtr = new char[strLength + 1];
    strcopy(rightStr.strPtr);
}

newString::~newString()  //destructor
{
    delete [] strPtr;
}

   //overload the assignment operator
const newString& newString::operator=(const newString& rightStr)
{
    if (this != &rightStr) //avoid self-copy
    {
        delete [] strPtr;
        strLength = rightStr.strLength;
        strPtr = new char[strLength + 1];
        strcopy(rightStr.strPtr);
    }

    return *this; 
}

char& newString::operator[] (int index)
{
    assert(0 <= index && index < strLength);
    return strPtr[index];
}

const char& newString::operator[](int index) const
{
    assert(0 <= index && index < strLength);
    return strPtr[index];
}

   //Overload the relational operators.
bool newString::operator==(const newString& rightStr) const
{
    return (strcmp(strPtr, rightStr.strPtr) == 0);
}

bool newString::operator<(const newString& rightStr) const
{
    return (strcmp(strPtr, rightStr.strPtr) < 0);
}

bool newString::operator<=(const newString& rightStr) const
{
    return (strcmp(strPtr, rightStr.strPtr) <= 0);
}

bool newString::operator>(const newString& rightStr) const
{
    return (strcmp(strPtr, rightStr.strPtr) > 0);
}

bool newString::operator>=(const newString& rightStr) const
{
    return (strcmp(strPtr, rightStr.strPtr) >= 0);
}

bool newString::operator!=(const newString& rightStr) const
{
    return (strcmp(strPtr, rightStr.strPtr) != 0);
}

    //Overload the stream insertion operator <<  
ostream& operator << (ostream& osObject, const newString& str)
{
    osObject << str.strPtr;

    return osObject;
}

    //Overload the stream extraction operator >>  
istream& operator >> (istream& isObject, newString& str)
{
    char temp[81];

    isObject >> setw(81) >> temp;
    str = temp;
    return isObject;
}

char* newString::strcopy(const char *str)
{
    for (int i = 0; i < strLength; i++)
        strPtr[i] = str[i];
    strPtr[strLength] = '\0';

    return strPtr;
}

char* newString::strcopy(char * str1, const char *str2)
{
    for (unsigned int i = 0; i < strlen(str1); i++)
        str1[i] = str2[i];
    str1[strlen(str1)] = '\0';

    return str1;
}