#include <iostream>
#include "Array.hpp"

int main() {
    try {
        Array<int> arr(5);

        for (unsigned int i = 0; i < arr.size(); i++) {
            arr[i] = i * 10;
        }

        std::cout << "Integer array: ";
        for (unsigned int i = 0; i < arr.size(); i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;

        std::cout << arr[10] << std::endl;

        Array<int> arr2 = arr;

        std::cout << "Copied array: ";
        for (unsigned int i = 0; i < arr2.size(); i++) {
            std::cout << arr2[i] << " ";
        }
        std::cout << std::endl;

        Array<int> arr3(3);
        arr3 = arr;

        std::cout << "Assigned array: ";
        for (unsigned int i = 0; i < arr3.size(); i++) {
            std::cout << arr3[i] << " ";
        }
        std::cout << std::endl;

    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
