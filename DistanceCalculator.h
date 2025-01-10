#include "StrongTypeExample/StrongTypes.h"
#include <cmath>

//using X_Coordinate = strongDouble<X>;
typedef strongDouble<X> X_Coordinate;
typedef strongDouble<Y> Y_Coordinate;
typedef strongDouble<Z> Z_Coordinate;

double distance(X_Coordinate x2,X_Coordinate x1,Y_Coordinate y2,Y_Coordinate y1){
    double d = sqrt(pow((x2-x1).value,2)+pow((y2-y1).value,2));
    return d;
}