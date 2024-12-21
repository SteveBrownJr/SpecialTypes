#pragma once
#include <iostream>
#include <string>
#include <stdexcept>

// Strong type for Real part
class Real {
    private:
        double value_;

    public:
        explicit Real(double value) : value_(value) {}
        double getValue() const;

        Real operator+(const Real& other) const;
        Real operator-(const Real& other) const;
        Real operator*(const Real& other) const;
        Real operator/(const Real& other) const;
};

// Strong type for Imaginary part
class Imaginary {
private:
    double value_;
public:
    explicit Imaginary(double value) : value_(value) {}
    double getValue() const;

    Imaginary operator+(const Imaginary& other) const;
    Imaginary operator-(const Imaginary& other) const;
    Imaginary operator*(const Imaginary& other) const;
    Imaginary operator/(const Imaginary& other) const;
};

// Complex number class
class Complex {
private:
    Real real_;
    Imaginary imaginary_;
public:
    Complex(const Real& real, const Imaginary& imaginary)
        : real_(real), imaginary_(imaginary) {}

    Real getReal() const;
    Imaginary getImaginary() const;

    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator*(const Complex& other) const;
    Complex operator/(const Complex& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
        os << c.real_.getValue() << (c.imaginary_.getValue() >= 0 ? " + " : " - ") << std::abs(c.imaginary_.getValue()) << "i";
        return os;
    }
};

