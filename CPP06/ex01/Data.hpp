#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <string.h>

typedef struct s_Data
{
    int int_val;
    float float_val;
    double double_val;
    std::string string_val;
} Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t arr);

#endif
