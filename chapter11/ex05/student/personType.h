#ifndef PERSONTYPE_H
#define PERSONTYPE_H

#include <string>
#include <iostream>  // Include this for cout

class personType {
public:
   personType(std::string first = "", std::string last = "");
   void print() const;
   void setName(std::string first, std::string last);
   std::string getFirstName() const;
   std::string getLastName() const;

private:
   std::string firstName, lastName;
};

#endif 