#include "Bureaucrat.hpp"
#include <iostream>

int main(void)
{
    {
        std::cout << "TEST 1" << std::endl;
        try {
            Bureaucrat bureaucrat("Mark", 160);
        }
        catch (std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        std::cout << "TEST 2" << std::endl;
        try {
            Bureaucrat bureaucrat("Mark", -12);
        }
        catch (std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        std::cout << "TEST 3" << std::endl;
        try {
            Bureaucrat bureaucrat("Mark", 4);
            std::cout << bureaucrat << std::endl;
            bureaucrat.incGrade();
            std::cout << bureaucrat << std::endl;
            bureaucrat.decGrade();
            std::cout << bureaucrat << std::endl;
        }
        catch (std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    return (0);
}
