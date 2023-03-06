#include <iostream>
#include "math.h"
#include "math-fn.h"

int main() {
    std::cout << "PI " << math::PI << std::endl;
    std::cout << "sum(1,2) = " << math::sum(1,2) << std::endl;

    return 0;
}