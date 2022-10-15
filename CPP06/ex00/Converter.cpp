#include "Converter.hpp"

char stringToChar(std::string str)
{
    int int_res;
    char char_res;

    std::cout << "char: ";
    if(str.length() == 1 && isdigit(*(str.c_str())) == false)
    {
        char_res = static_cast<char>(*(str.c_str()));
        std::cout << char_res;
    } else
    {
        try
        {
            int_res = static_cast<int>(std::stoi(str));
            if(isprint(int_res) == false)
            {
                std::cout << "Non displayable" << std::endl;
                return (int_res);
            }
            char_res = static_cast<char>(int_res);
            std::cout << "\'" << char_res << "\'";
        }
        catch(const std::exception& e) {
            std::cout << "impossible";
        }
    }
    std::cout << std::endl;
    return (char_res);
}

int stringToInt(std::string str)
{
    int res;
    std::cout << "int: ";
    try
    {
        res = static_cast<int>(std::stoi(str));
        std::cout << res;
    }
    catch (const std::exception& e) {
        std::cout << "impossible";
    }
    std::cout<<std::endl;
    return (res);
}

float stringToFloat(std::string str)
{
    float res;
    std::cout << "float: ";
    try
    {
        res = static_cast<float>(std::stof(str));
        std::cout << res;
        if(res - static_cast<int>(std::stof(str)) == 0)
            std::cout << ".0";
        std::cout << "f";
    }
    catch (const std::exception& e) {
        std::cout << "impossible";
    }
    std::cout << std::endl;
    return (res);
}

double stringToDouble(std::string str)
{
    double res;
    std::cout << "double: ";
    try
    {
        res = static_cast<double>(std::stod(str));
        std::cout<< res;
        if(res - static_cast<int>(std::stod(str)) == 0)
            std::cout << ".0";
    }
    catch (const std::exception& e) {
        std::cout << "impossible";
    }
    std::cout<<std::endl;
    return (res);
}