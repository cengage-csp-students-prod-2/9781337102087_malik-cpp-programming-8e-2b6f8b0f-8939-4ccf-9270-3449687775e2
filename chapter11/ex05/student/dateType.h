#ifndef DATE_TYPE_H
#define DATE_TYPE_H

class dateType {
public:
    dateType(int month = 1, int day = 1, int year = 1900);

    void setDate(int month, int day, int year);
    void printDate() const;

private:
    int dMonth;
    int dDay;
    int dYear;
};

#endif
