#ifndef _STRONGTYPE_
#define _STRONGTYPE_
enum Coordinate{
  X,
  Y,
  Z
};

template <Coordinate Tag>
struct strongDouble {
  strongDouble(double _value):value(_value){};
  double value;
  bool operator==(const strongDouble<Tag>& other) const { return value == other.value; }
  bool operator!=(const strongDouble<Tag>& other) const { return value != other.value; }
  bool operator<(const strongDouble<Tag>& other) const { return value < other.value; }
  bool operator<=(const strongDouble<Tag>& other) const { return value <= other.value; }
  bool operator>(const strongDouble<Tag>& other) const { return value > other.value; }
  bool operator>=(const strongDouble<Tag>& other) const { return value >= other.value; }
  strongDouble<Tag> operator-(const strongDouble<Tag>& other) const { return strongDouble<Tag>(value - other.value); }
  strongDouble<Tag> operator+(const strongDouble<Tag>& other) const { return strongDouble<Tag>(value + other.value); }
};

//using X_Coordinate = strongDouble<X>;
typedef strongDouble<X> X_Coordinate;
typedef strongDouble<Y> Y_Coordinate;
typedef strongDouble<Z> Z_Coordinate;


#endif
