#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form()
{}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) : Form(src)
{}
RobotomyRequestForm::~RobotomyRequestForm()
{}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& src)
{
    this->Form::operator=(src);
    return(*this);  
}
void RobotomyRequestForm::execute(const Bureaucrat& bureaucrat) const
{
    if(this->Form::getSigned() == false)
        throw Form::IsNotSignedException();
    if(bureaucrat.getGrade() > this->Form::getGradeExecute())
        throw Form::GradeTooLowException();
    std::cout << "Object of RobotomyRequestForm:" << std::endl;
    std::cout << "Makes some drilling noises" << std::endl;
    std::cout << "Tell :" << this->Form::getName() << "is been robotomized successfully 50 \% of the time" << std::endl;
}