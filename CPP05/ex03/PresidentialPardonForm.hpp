#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <string.h>
#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form{
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm& src);
    ~PresidentialPardonForm();
    PresidentialPardonForm& operator=(const PresidentialPardonForm& src);
    virtual void execute(const Bureaucrat& bureaucrat) const;
};

#endif
