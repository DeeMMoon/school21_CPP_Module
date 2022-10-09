#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form()
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{}
    
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : Form(src)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

 PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& src)
{
    this->Form::operator=(src);
    return(*this);  
}

 void PresidentialPardonForm::execute(const Bureaucrat& bureaucrat) const
{
    if(this->Form::getSigned() == false)
        throw Form::IsNotSignedException();
    if(bureaucrat.getGrade() > this->Form::getGradeExecute())
        throw Form::GradeTooLowException();
    std::cout << "Object of PresidentialPardonForm:" << std::endl;
    std::cout << "Inform that :" << this->Form::getName() << "has been pardoned by Zaphod Beeblebrox" << std::endl;
}