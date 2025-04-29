#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void iter(T *adress, size_t length, void(*f)(T const &)){
    for(size_t i = 0; i < length; i++){
        f(adress[i]);
    }
}

template <typename T>
void print(T const & element){
    std::cout << element << std::endl;
}

#endif
