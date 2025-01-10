#ifndef _DISTANCECALC
#define _DISTANCECALC
#include "StrongTypes.h"
#include <cmath>

double distance(X_Coordinate x2,X_Coordinate x1,Y_Coordinate y2,Y_Coordinate y1){
    double d = sqrt(pow((x2-x1).value,2)+pow((y2-y1).value,2));
    return d;
}
#endif