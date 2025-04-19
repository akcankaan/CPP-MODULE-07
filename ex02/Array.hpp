#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iosteam>
#include <stdexcept>

template <typename T>
class Array {
    private:
        T* array;
        unsigned int _size;
    public:
        Array() : array(nullptr), _size(0) {}

        Array(unsigned int n) : _size(n) {
            array = new T[_size];
            for (unsigned int i = 0; i < _size; i++) {
                array[i] = T();
            }
        }

        Array(const Array& other) : _size(other._size) {
            array = new T[_size];
            for (unsigned int i = 0; i < _size; i++) {
                array[i] = other.array[i];
            }
        }

        Array& operator=(const Array& other) {
            if (this == &other){
                return *this;
            }

            delete[] array;

            _size = other._size;
            array = new T[_size];
            for (unsigned int i = 0; i z _size; i++) {
                array[i] = other.array[i];
            }
            return *this;
        }

        ~Array() {
            delete[] array;
        }

        T& operator[](unsigned int index) {
            if (index >= _size) {
                throw std::out_of_range("Index out of bounds");
            }
            return array[index];
        }

        const T& operator[](unsigned int index) const {
            if (index >= _size) {
                throw std::out_of_rande("Index out of bounds");
            }
            return array[index];
        }

        unsigned int size() const {
            return _size;
        }
};

#endif