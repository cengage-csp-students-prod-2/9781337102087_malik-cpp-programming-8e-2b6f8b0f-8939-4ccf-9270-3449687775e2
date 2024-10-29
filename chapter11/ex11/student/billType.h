 
#ifndef H_BillType
#define H_BillType

#include <string>
#include "doctorType.h"
#include "personType.h"
#include "dateType.h"
 
using namespace std;

class billType 
{
public:
    void printBill() const;

    void setInfo(string id = "", double phCharges = 0, double rRent = 0,
                 double docFee = 0);

    void setID(string id);
    string getID();

    void setPharmacyCharges(double charges = 0);
    double getPharmacyCharges();
    void updatePharmacyCharges(double charges = 0);

    void setRoomRent(double charges = 0);
    double getRoomRent();
    void updateRoomRent(double charges = 0);

    void setDoctorFee(double charges = 0);
    double getDoctorFee();
    void updateDoctorFee(double charges = 0);

    double billingAmount();

    billType(string id = "", double phCharges = 0, double rRent = 0, double docFee = 0);

 private:
    string ID;
    double pharmacyCharges;
    double roomRent;
    double doctorFee;
};

#endif