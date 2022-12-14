#include "Bureaucrat.hpp"

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default")
{
    this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string name_val, int grade) : name (name_val)
{
    if(grade < 1)
        throw Bureaucrat::GradeTooLowException();
    if(grade > 150)
        throw  Bureaucrat::GradeTooHighException();
    else
        this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) : name(src.name)
{
    this->grade = src.grade;
}
Bureaucrat::~Bureaucrat(){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src)
{
   if(this == &src)
       return (*this);
   this->grade = src.grade;
    return (*this);
}
std::string Bureaucrat::getName(void) const
{
    return (this->name);
}
int Bureaucrat::getGrade(void) const
{
    return (this->grade);
}
void Bureaucrat::incGrade(void)
{
    if(this->grade == 1)
        throw Bureaucrat::GradeTooLowException();
    else
        this->grade--;
}
void Bureaucrat::decGrade(void)
{
    if(this->grade == 150)
        throw Bureaucrat::GradeTooHighException();
    else
        this->grade++;
}

std::ostream& operator<< (std::ostream& out, const Bureaucrat& obj)
{
    out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return (out);
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade to High");
}
const char  *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade to Low");
}
