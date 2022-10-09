#ifndef FORM_HPP
#define FORM_HPP

#include <string.h>
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form {
private:
    const std::string   name;
    const int           gradeSing;
    const int           gradeExecute;
    bool                isSigned;
public:
    Form();
    Form(const std::string name_val, const int sign_val, const int execute_val);
    Form(const Form& src);
    virtual ~Form();
    std::string   getName(void) const;
    int           getGradeSing(void) const;
    int           getGradeExecute(void) const;
    bool          getSigned(void) const;
    Form&         operator=(const Form& src);
    void          beSigned(const Bureaucrat& bureaucrat);
    virtual void  execute(const Bureaucrat& bureaucrat) const = 0;
    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char * what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char * what() const throw();
    };
    class IsNotSignedException : public std::exception
    {
    public:
        virtual const char * what() const throw();
    };
};

std::ostream& operator<< (std::ostream& out, const Form& obj);


#endif
