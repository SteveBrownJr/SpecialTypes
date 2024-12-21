#include "ComplexNumber.h"
#include <stdexcept>

#include <cmath>

Complex Complex::operator+(const Complex& other) const{
    return Complex(real.value + other.real.value, imag.value + other.imag.value);
}

Complex Complex::operator-(const Complex& other) const {
    return Complex(real.value - other.real.value, imag.value - other.imag.value);
}

Complex Complex::operator*(const Complex& other) const {
    return Complex(real.value * other.real.value - imag.value * other.imag.value, real.value * other.imag.value + imag.value * other.real.value);
}

Complex Complex::operator/(const Complex& other) const {
    double denominator = other.real.value * other.real.value + other.imag.value * other.imag.value;
    if (denominator == 0) {
        throw std::runtime_error("Division by zero in Complex number division.");
    }
    return Complex((real.value * other.real.value + imag.value * other.imag.value) / denominator,
        (imag.value * other.real.value - real.value * other.imag.value) / denominator);
}

bool Complex::operator==(const Complex& other) const {
    return real.value == other.real.value && imag.value == other.imag.value;
}

bool Complex::operator!=(const Complex& other) const {
    return !(*this == other);
}

Complex Complex::conjugate() const {
    return Complex(real.value, -imag.value);
}

double Complex::magnitude() const {
    return std::sqrt(real.value * real.value + imag.value * imag.value);
}


