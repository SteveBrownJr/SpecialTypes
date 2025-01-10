#ifndef _POINT_
#define _POINT_
#include "DistanceCalculator.h"

class Point{
    X_Coordinate x;
    Y_Coordinate y;
public:
    Point():x(0),y(0){}    
    Point(X_Coordinate _x, Y_Coordinate _y):x(_x),y(_y){}
    X_Coordinate getX(){return x;} const
    Y_Coordinate getY(){return y;} const
    double distanceFrom(Point& other){ return distance(this->getX(),other.getX(),this->getY(),other.getY());}
};
#endif