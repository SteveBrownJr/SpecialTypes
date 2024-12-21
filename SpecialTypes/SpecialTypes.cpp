#include <iostream>
#include "ComplexNumber.h"

int main()
{
    try {
        Real real1(3.0);
        Imaginary imaginary1(4.0);
        Complex c1(real1, imaginary1);

        Real real2(1.0);
        Imaginary imaginary2(2.0);
        Complex c2(real2, imaginary2);

        Complex sum = c1 + c2;
        Complex difference = c1 - c2;
        Complex product = c1 * c2;
        Complex quotient = c1 / c2;

        std::cout << "c1: " << c1 << "\n";
        std::cout << "c2: " << c2 << "\n";
        std::cout << "Sum: " << sum << "\n";
        std::cout << "Difference: " << difference << "\n";
        std::cout << "Product: " << product << "\n";
        std::cout << "Quotient: " << quotient << "\n";
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }

    return 0;
}

