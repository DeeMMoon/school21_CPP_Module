#include "Intern.hpp"

Intern::Intern(){}

Intern::~Intern(){}

Form* Intern::createShrubbery(const std::string name)
{ return (new ShrubberyCreationForm(name));}

Form* Intern::createRobotomy(const std::string name)
{return (new RobotomyRequestForm(name));}

Form* Intern::createPresidential(const std::string name)
{return (new PresidentialPardonForm(name));}

Form* Intern::makeForm(const std::string form_name, std::string target_name)
{
    Form* (Intern::*chooseForm[3])(const std::string) = {&Intern::createPresidential, &Intern::createRobotomy, &Intern::createShrubbery};
    const std::string forms[3] = {"robotomy request", "shrubbery request", "presidential request"};
    for(int i = 0; i < 3; i++)
    {
        if (forms[i] == form_name)
            return(this->*chooseForm[i])(target_name);
    }
    throw FormNameException();
}
const char* Intern::FormNameException::what() const throw() 
{
    return ("Invalid name");
}