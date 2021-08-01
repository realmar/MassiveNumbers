#include "massive_int.hpp"

#include <iostream>
#include <avx.hpp>


int main() {
    massive_int mint(69);

    std::cout << "today's massive int: " << mint << std::endl;

    return 0;
}
