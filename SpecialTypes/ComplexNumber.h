#pragma once
#include <iostream>

class Real {
public:
    double value;
    explicit Real(double v) : value(v) {}
};

class Imaginary {
public:
    double value;
    explicit Imaginary(double v) : value(v) {}
};

class Complex {
private:


    Real real;
    Imaginary imag;

public:
    // Constructors
    Complex() : real(Real(0)), imag(Imaginary(0)) {}
    Complex(double r, double i) : real(Real(r)), imag(Imaginary(i)) {}

    // Getter and Setter
    double getReal() const { return real.value; }
    double getImag() const { return imag.value; }
    void setReal(double r) { real = Real(r); }
    void setImag(double i) { imag = Imaginary(i); }

    // Operátorok, nehogy valami olyan mûveletet tudjunk végezni amit nem szabadna!
    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator*(const Complex& other) const;
    Complex operator/(const Complex& other) const;
    bool operator==(const Complex& other) const;
    bool operator!=(const Complex& other) const;
    Complex conjugate() const;
    double magnitude() const;
    

    friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
        os << c.real.value;
        if (c.imag.value >= 0) os << " + " << c.imag.value << "i";
        else os << " - " << -c.imag.value << "i";
        return os;
    }

    friend std::istream& operator>>(std::istream& is, Complex& c) {
        std::cout << "Enter real part: ";
        is >> c.real.value;
        std::cout << "Enter imaginary part: ";
        is >> c.imag.value;
        return is;
    }
};

