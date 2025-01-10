#include "DistanceCalculator.h"
#include <stdio.h>


int main(){
    X_Coordinate x2(2.0d);
    Y_Coordinate y2(2.0d);
    X_Coordinate x1(2.0d);
    Y_Coordinate y1(4.0d);
    double d = distance(x2,x1,y2,y1);
    printf("%lf\n",d);
    return 0;
}