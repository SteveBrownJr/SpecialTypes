#include "ComplexNumber.h"
#include <stdexcept>

#include <cmath>

double Real::getValue() const { return value_; }

// Overload + operator
Real Real::operator+(const Real& other) const {
    return Real(value_ + other.value_);
}

// Overload - operator
Real Real::operator-(const Real& other) const {
    return Real(value_ - other.value_);
}

// Overload * operator
Real Real::operator*(const Real& other) const {
    return Real(value_ * other.value_);
}

// Overload / operator
Real Real::operator/(const Real& other) const {
    if (other.value_ == 0) {
        throw std::runtime_error("Division by zero in Real division.");
    }
    return Real(value_ / other.value_);
}


double Imaginary::getValue() const { return value_; }

// Overload + operator
Imaginary Imaginary::operator+(const Imaginary& other) const {
    return Imaginary(value_ + other.value_);
}

// Overload - operator
Imaginary Imaginary::operator-(const Imaginary& other) const {
    return Imaginary(value_ - other.value_);
}

// Overload * operator
Imaginary Imaginary::operator*(const Imaginary& other) const {
    return Imaginary(value_ * other.value_);
}

// Overload / operator
Imaginary Imaginary::operator/(const Imaginary& other) const {
    if (other.value_ == 0) {
        throw std::runtime_error("Division by zero in Imaginary division.");
    }
    return Imaginary(value_ / other.value_);
}


Real Complex::getReal() const { return real_; }
Imaginary Complex::getImaginary() const { return imaginary_; }

// Overload + operator
Complex Complex::operator+(const Complex& other) const {
    return Complex(real_ + other.real_, imaginary_ + other.imaginary_);
}

// Overload - operator
Complex Complex::operator-(const Complex& other) const {
    return Complex(real_ - other.real_, imaginary_ - other.imaginary_);
}

// Overload * operator
Complex Complex::operator*(const Complex& other) const {
    Real realPart = Real(real_.getValue() * other.real_.getValue() - imaginary_.getValue() * other.imaginary_.getValue());
    Imaginary imaginaryPart = Imaginary(real_.getValue() * other.imaginary_.getValue() + imaginary_.getValue() * other.real_.getValue());
    return Complex(realPart, imaginaryPart);
}

// Overload / operator
Complex Complex::operator/(const Complex& other) const {
    double denominator = other.real_.getValue() * other.real_.getValue() + other.imaginary_.getValue() * other.imaginary_.getValue();
    if (denominator == 0) {
        throw std::runtime_error("Division by zero in Complex division.");
    }

    Real realPart = Real((real_.getValue() * other.real_.getValue() + imaginary_.getValue() * other.imaginary_.getValue()) / denominator);
    Imaginary imaginaryPart = Imaginary((imaginary_.getValue() * other.real_.getValue() - real_.getValue() * other.imaginary_.getValue()) / denominator);
    return Complex(realPart, imaginaryPart);
}
