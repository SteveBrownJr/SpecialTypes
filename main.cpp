
#include <stdio.h>

//#define STRONG_TYPE_EXAMPLE
#define PHANTOM_TYPE_EXAMPLE

#ifdef STRONG_TYPE_EXAMPLE
#include "StrongTypeExample/Point.h"
int main(){
    Point a(X_Coordinate(2.0d),Y_Coordinate(2.0d));
    Point b(X_Coordinate(4.0d),Y_Coordinate(2.0d));
    double d = a.distanceFrom(b);
    printf("%lf\n",d);
    return 0;
}
#endif

#ifdef PHANTOM_TYPE_EXAMPLE
#include "PhantomTypeExample/Wattage.h"
int main(){
    Voltage U(12.0d);
    Current I(3.0d);
    double P = CalcWattage(U,I);
    printf("%lfW \n",P);
    return 0;
}
#endif