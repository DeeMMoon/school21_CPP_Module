#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

int main() {
    {
        std::cout << "Test 1" << std::endl;
        std::cout << "Form Tom" << std::endl;
        try {
            Form Tom("Tom", 120, 30);
            Bureaucrat a("Dim Cheaty", 1);
            a.signForm(Tom);
            std::cout << Tom << std::endl;
        }
        catch (std::exception &e) {
            std::cerr << e.what() << '\n';
        }
    }
    {
        std::cout << "Test 2" << std::endl;
        std::cout << "Form Tom" << std::endl;
        try {
            Form Tom("Tom", 120, 0);
            Bureaucrat a("Dim Cheaty", 1);
            a.signForm(Tom);
            std::cout << Tom;
        }
        catch (std::exception &e) {
            std::cerr << e.what() << '\n';
        }
    }
    {
        std::cout << "Test 3" << std::endl;
        std::cout << "Form Tom" << std::endl;
        try {
            Form Tom("Tom", 120, 151);
            Bureaucrat a("Dim Cheaty", 1);
            a.signForm(Tom);
            std::cout << Tom;
        }
        catch (std::exception &e) {
            std::cerr << e.what() << '\n';
        }
    }

}

