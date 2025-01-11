#include "PhantomTypes.h"

double CalcWattage(Voltage v, Current c){
    return v.getValue() * c.getValue();
}