#ifndef EXTPERSONTYPE_H
#define EXTPERSONTYPE_H

#include <string>
#include "personType.h"
#include "dateType.h"

class extPersonType : public personType {
public:
   void setInfo(int month, int day, int year, std::string street, std::string city,
                std::string state, std::string zip, std::string phone, std::string status);
  
   void print() const;  // Prints full information including address, phone, etc.

   extPersonType(std::string first = "", std::string last = "", int month = 1, int day = 1, int year = 1900,
                 std::string street = "", std::string city = "", std::string state = "",
                 std::string zip = "", std::string phone = "", std::string status = "");

private:
   dateType birthDate; // Inherited from personType
   std::string street, city, state, zip, phone, pStatus;
};

#endif