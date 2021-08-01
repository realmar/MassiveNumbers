#include "massive_int.hpp"

#include <iostream>
#include <avx.hpp>


int main() {
    BigInt mint(69);

    std::cout << "today's massive int: " << mint.toString() << std::endl;

    return 0;
}
