#include <iostream>
#include "long_number.hpp"

int main() {
    shella::LongNumber num1("37283723872283928382938");
    shella::LongNumber num2("1293283928398292839283");
    shella::LongNumber sum = num1 + num2;

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
