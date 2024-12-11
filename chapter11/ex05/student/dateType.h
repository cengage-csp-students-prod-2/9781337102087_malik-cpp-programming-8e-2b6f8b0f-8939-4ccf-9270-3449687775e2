#ifndef DATE_TYPE_H
#define DATE_TYPE_H

class dateType {
public:
    void setDate(int month, int day, int year);
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    void printDate() const;
    dateType(int month = 1, int day = 1, int year = 1900);

private:
    int dMonth;
    int dDay;
    int dYear;
};

#endif
