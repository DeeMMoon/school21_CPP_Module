#ifndef INTERN_HPP
#define INTERN_HPP

#include <string.h>
#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
public:
    Intern();
    ~Intern();
    Intern(Intern const& src);
    Intern& operator=(Intern const& src);

    Form* createShrubbery(const std::string name);
    Form* createRobotomy(const std::string name);
    Form* createPresidential(const std::string name);
    Form* makeForm(const std::string form_name, std::string target_name);

    class FormNameException : public std::exception
    {
        public:
            const char * what() const throw();
    };
};

#endif