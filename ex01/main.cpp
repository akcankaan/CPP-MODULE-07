#include <iostream>
#include "iter.hpp"

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    std::string fruits[] = {"apple", "banana", "cherry"};

    iter(numbers, 5, print);
    iter(fruits, 3, print);
    return 0;
}

