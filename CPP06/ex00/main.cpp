#include <string.h>
#include <iostream>
#include "Converter.hpp"

int main (int argc, char **argv)
{
    std::string str;
    if(argc != 2)
        exit(1);
    else
        str = argv[1];
    stringToChar(str);
    stringToInt(str);
    stringToFloat(str);
    stringToDouble(str);
    std::cout<<std::endl;
    return (0);
}
