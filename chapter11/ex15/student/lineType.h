
#ifndef lineType_H
#define lineType_H

#include "pointType.h"

class lineType
{
public:
    void setLineCoordinates(double a1 = 0, double b1 = 0, 
                        double a2 = 0, double b2 = 0);
    void setLineCoordinates(pointType& p1,
                            pointType& p2);
    void getLineCoordinates(pointType& p1, pointType& p2);

    double slope();
      // If line is vertical, then the function 
      // returns -999999999999999.

    void lineEquation();

    bool isVerticalLine();
    bool isHorizontalLine();
    bool parallel(lineType& l);

    pointType intersectionPoint(lineType& l);

    lineType(double a1 = 0, double b1 = 0,
             double a2 = 0, double b2 = 0);
    lineType(pointType& p1, pointType& p2);

private:
    pointType a;
    pointType b;
};

#endif