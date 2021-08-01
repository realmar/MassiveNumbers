#include "massive_int.hpp"

std::ostream& operator<<(std::ostream& target, const massive_int& source) {
    target << source._value;
    return target;
}
