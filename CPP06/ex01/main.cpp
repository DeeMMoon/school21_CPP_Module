#include "Data.hpp"
#include <iostream>

int main(void)
{
    std::cout << "TEST" << std:: endl;
    Data* info1 = new Data();
    Data* info2;
    uintptr_t p;

    info1->int_val = 10;
    info1->float_val = 10.1f;
    info1->double_val = 1.1;
    info1->string_val= "qwe";
    p = serialize(info1);
    info2 = deserialize(p);

    std::cout << p << std::endl;
    std::cout << sizeof(p) << std::endl;

    std::cout << info1 << std::endl;
    std::cout << sizeof(info1) << std::endl;
    std::cout << info1->int_val << std::endl;
    std::cout << info1->float_val << std::endl;
    std::cout << info1->double_val << std::endl;
    std::cout << info1->string_val << std::endl;

    std::cout << info2 << std::endl;
    std::cout << sizeof(info2) << std::endl;
    std::cout << info2->int_val << std::endl;
    std::cout << info2->float_val << std::endl;
    std::cout << info2->double_val << std::endl;
    std::cout << info2->string_val << std::endl;

    delete info1;
    return (0);



}