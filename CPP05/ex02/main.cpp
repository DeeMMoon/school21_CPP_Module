#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

int main() {
    std::cout << "Form Tom"  << std::endl;
    try {
        Form Tom("Tom", 120, 30);
        Bureaucrat a("Dim Cheaty", 1);
        a.signForm(Tom);
        std::cout << Tom;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << '\n';
    }
}

