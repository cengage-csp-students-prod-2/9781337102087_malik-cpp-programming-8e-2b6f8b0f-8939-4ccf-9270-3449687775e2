#ifndef H_addressType
#define H_addressType

#include <string>

class addressType {
public:
   void setAddress(std::string street, std::string city, std::string state, std::string zip);
   std::string getStreet() const;
   std::string getCity() const;
   std::string getState() const;
   std::string getZip() const;

private:
   std::string street;
   std::string city;
   std::string state;
   std::string zip;
};

#endif