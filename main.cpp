#include "StrongTypeExample/Point.h"
#include <stdio.h>


int main(){
    Point a(X_Coordinate(2.0d),Y_Coordinate(2.0d));
    Point b(X_Coordinate(4.0d),Y_Coordinate(2.0d));
    double d = a.distanceFrom(b);
    printf("%lf\n",d);
    return 0;
}