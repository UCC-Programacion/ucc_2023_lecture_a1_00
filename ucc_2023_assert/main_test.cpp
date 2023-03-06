#include <iostream>
#include <cassert>
#include "sum.h"

int main() {
    assert(sum(1,2) == 3);
    assert(sum(0,0) == 0);
    assert(sum(10,22) == 32);

    return EXIT_SUCCESS;
}

