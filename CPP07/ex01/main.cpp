#include "iter.hpp"
#include <iostream>

struct MyType{
    char c;
    float f;
};

std::ostream& operator<<(std::ostream &out, MyType const &src)
{
    out<< src.c << ":" << src.f;
    return (out);
}

template <typename T>
void myPrint(T const &element)
{
    std::cout << element << " ";
}

int main( void ) {

    int arrInt[] = {1,2,3,4,5,};
    std::string arrStr[] = {"qwe", "asd", "123"};
    MyType arrMy[] = {{'a', 12.2f}, {'b', 1.1f}};

    iter(arrInt, 5, myPrint);
    std::cout << std::endl;

    iter(arrStr, 3, myPrint);
    std::cout << std::endl;

    iter(arrMy, 2, myPrint);
    std::cout << std::endl;

    return (0);
}