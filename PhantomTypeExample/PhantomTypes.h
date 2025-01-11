enum PhantomTypeTags{
    C,
    V
};

template<PhantomTypeTags Tag, typename Typ>
class PhantomType{
    Typ value;
public:
    PhantomType();
    PhantomType(Typ _value):value(_value){}
    bool operator==(const PhantomType<Tag,Typ>& other) const { return value == other.value; }
    bool operator!=(const PhantomType<Tag,Typ>& other) const { return value != other.value; }
    bool operator<(const PhantomType<Tag,Typ>& other)  const { return value < other.value;  }
    bool operator<=(const PhantomType<Tag,Typ>& other) const { return value <= other.value; }
    bool operator>(const PhantomType<Tag,Typ>& other)  const { return value > other.value;  }
    bool operator>=(const PhantomType<Tag,Typ>& other) const { return value >= other.value; }
    PhantomType<Tag,Typ> operator-(const PhantomType<Tag,Typ>& other) const { return PhantomType<Tag,Typ>(value - other.value); }
    PhantomType<Tag,Typ> operator+(const PhantomType<Tag,Typ>& other) const { return PhantomType<Tag,Typ>(value + other.value); }
    PhantomType<Tag,Typ> operator/(const PhantomType<Tag,Typ>& other) const { return PhantomType<Tag,Typ>(value / other.value); }
    PhantomType<Tag,Typ> operator*(const PhantomType<Tag,Typ>& other) const { return PhantomType<Tag,Typ>(value * other.value); }
    Typ getValue()const{ return value; }
};

typedef PhantomType<V,double> Voltage;
typedef PhantomType<C,double> Current;