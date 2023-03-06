#include <iostream>
#include "sum.h"

int main() {
    int a;
    int b;

    std::cout << "ingrese a: ";
    std::cin >> a;
    std::cout << "ingrese b: ";
    std::cin >> b;

    std::cout << "sum(a, b) = " << sum(a,b) << std::endl;

    return EXIT_SUCCESS;
}

