#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() :  name("define"),
                gradeSing(150),
                gradeExecute(150),
                isSigned(false)
                {}
Form::Form(const std::string name_val, const int sign_val, const int execute_val)
             :  name(name_val),
                gradeSing(sign_val),
                gradeExecute(execute_val),
                isSigned(false)
{
    if (sign_val < 1 || execute_val < 1)
        throw Bureaucrat::GradeTooHighException();
    if (sign_val > 150 || execute_val > 150)
        throw Bureaucrat::GradeTooLowException();
}

Form::Form(const Form &src)
             :  name(src.name),
                gradeSing(src.gradeSing),
                gradeExecute(src.gradeExecute),
                isSigned(src.isSigned)
{}

Form::~Form() {}

std::string   Form::getName(void) const {return this->name;}

int           Form::getGradeSing(void) const {return this->gradeSing;}

int           Form::getGradeExecute(void) const {return this->gradeExecute;}

bool          Form::getSigned(void) const {return this->isSigned;}

Form&         Form::operator=(const Form& src)
{
    if (this == &src)
        return (*this);
    this->isSigned = src.isSigned;
    return (*this);
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade to high");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade to low");
}

const char* Form::IsNotSignedException::what() const throw()
{
    return ("Is not signed");
}

void          Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() < this->gradeSing)
        this->isSigned = true;
    else
        throw Form::GradeTooLowException();
}

void Form::execute(const Bureaucrat& bureaucrat) const
{
    std::cout << bureaucrat.getName() << " attempting to execute form " << this->name << std::endl;
}

std::ostream& operator<< (std::ostream& out, const Form& obj)
{
    out << obj.getName() << ", " << obj.getGradeSing() << ", "
        << obj.getGradeExecute() << ", sign = " << obj.getSigned();
    return (out);
}