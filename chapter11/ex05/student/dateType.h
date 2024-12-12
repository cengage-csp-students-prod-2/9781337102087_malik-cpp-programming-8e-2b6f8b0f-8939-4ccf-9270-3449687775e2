#ifndef DATETYPE_H
#define DATETYPE_H

class dateType {
private:
   int dMonth;
   int dDay;
   int dYear;

public:
   dateType(int month = 0, int day = 0, int year = 0);
   void setDate(int month, int day, int year);
   int getDay() const;
   int getMonth() const;
   int getYear() const;
   void printDate() const;
};

#endif
