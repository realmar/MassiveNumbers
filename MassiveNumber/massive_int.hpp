#pragma once
#include <ostream>

class massive_int {
private:
    int _value;

public:
    massive_int(int value)
        : _value(value) {
    }

    massive_int()
        : massive_int(0) {
    }

    friend std::ostream& operator<<(std::ostream& target, const massive_int& source);
};
