#include <iostream>
#include <string>
#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;
    std::string str;

    if(argc != 2)
        return (1);
    str = argv[1];
    if (!str.compare("DEBUG"))
        harl.complain("0");
    else if (!str.compare("INFO"))
        harl.complain("1");
    else if (!str.compare("WARNING"))
        harl.complain("2");
    else if (!str.compare("ERROR"))
        harl.complain("3");
    else
        harl.complain("-1");
    return (0);
}