#include <iostream>
#include "Array.hpp"

int main() {
    try {
        Array<int> arr(5);

        for (unsigned int i = 0; i < arr.size(); i++) {
            arr[i] = i * 10;
        }

        std::cout << "Array elements: ";
        for (unsigned int i = 0; i < arr.size(); i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;

        std::cout << arr[10] << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    Array<int> arr2 = arr;

    Array<int> arr3(3);
    arr3 = arr;

    return 0;
}