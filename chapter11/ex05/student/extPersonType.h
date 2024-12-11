#ifndef EXTPERSONTYPE_H
#define EXTPERSONTYPE_H

#include <string>

class extPersonType {
public:
    void setName(const std::string& firstName, const std::string& lastName);
    void setPersonInfo(const std::string& street, const std::string& city, const std::string& state,
                       const std::string& zip, const std::string& phone, int month, int day, int year, const std::string& status);
    void printPersonInfo() const;

private:
    std::string firstName;
    std::string lastName;
    std::string street;
    std::string city;
    std::string state;
    std::string zip;
    std::string phoneNumber;
    int month, day, year;
    std::string status;
};

#endif
