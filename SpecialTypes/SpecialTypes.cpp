#include <iostream>
#include "ComplexNumber.h"

int main()
{
    Complex c1(3, 4), c2(1, -2);

    std::cout << "Complex Number 1: " << c1 << "\n";
    std::cout << "Complex Number 2: " << c2 << "\n";

    Complex sum = c1 + c2;
    std::cout << "Sum: " << sum << "\n";

    Complex diff = c1 - c2;
    std::cout << "Difference: " << diff << "\n";

    Complex product = c1 * c2;
    std::cout << "Product: " << product << "\n";

    try {
        Complex quotient = c1 / c2;
        std::cout << "Quotient: " << quotient << "\n";
    }
    catch (const std::runtime_error& e) {
        std::cerr << e.what() << "\n";
    }

    std::cout << "Conjugate of c1: " << c1.conjugate() << "\n";
    std::cout << "Magnitude of c1: " << c1.magnitude() << "\n";

    return 0;
}

