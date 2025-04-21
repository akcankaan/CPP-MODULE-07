#include <iostream>
#include "iter.hpp"

template <typename T>
void print(T& value) {
    std::cout << value << " ";
}

template <typename T>
void increment(T& value) {
    value++;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    std::string strArr[3] = {"apple", "banana", "cherry"};

    std::cout << "Integer array: ";
    iter(arr, 5, print);
    std::cout << std::endl;

    std::cout << "String array: ";
    iter(strArr, 3, print);
    std::cout << std::endl;

    iter(arr, 5, increment);
    std::cout << "Incremented integer array: ";
    iter(arr, 5, print);
    std::cout << std::endl;

    return 0;
}
