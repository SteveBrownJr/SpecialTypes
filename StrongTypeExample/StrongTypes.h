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
};



