 
#ifndef pointType_H
#define pointType_H

class pointType
{
public:
    void setPoint(double a = 0, double b = 0);
      //Function to set the x and y coordinates of a point
      //Postcondition x = a; y = b;

    void setX(double a = 0);
      //Function to set x coordinate.
      //Postcondition: x = a;

    double getX();
      //Function to return the x coordinate.

    void setY(double b = 0);
     //Function to set y coordinate.
     //Postcondition: y = b;

    double getY();
     //Function to return the y coordinate.

    double distance(pointType & point);
      //Function to return the distance between this point
      //point

    void print() const;
      //Function to print the x and y coordinates.

    pointType(double a = 0.0, double b = 0.0);
      //Constructor with a default parameter.

private:
    double x;
    double y;
};

#endif