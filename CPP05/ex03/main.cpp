#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main() {

    Intern stagiaire;
    Bureaucrat bur("Bur", 1);
    Form* pass;
    Form* rrf;
    Form* ppf;
    Form* scf;

    std::cout << std::endl;

    try
    {
        pass = stagiaire.makeForm("fake passport", "Travel");

        std::cout << std::endl;

        rrf = stagiaire.makeForm("robotomy request", "Human");

        std::cout << std::endl;

        ppf = stagiaire.makeForm("presidential pardon", "President");
        ppf->beSigned(bur);
        ppf->execute(bur);

        std::cout << std::endl;

        scf = stagiaire.makeForm("shrubbery creation", "Garden");
        scf->execute(bur);
    }

    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    delete pass;
    delete rrf;
    delete ppf;
    delete scf;

    return 0;
}

