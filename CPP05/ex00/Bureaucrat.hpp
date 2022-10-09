#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat {
private:
    const std::string name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat& src);
    ~Bureaucrat();
    Bureaucrat& operator=(const Bureaucrat& src);
    std::string getName(void) const;
    int getGrade(void) const;
    void incGrade(void);
    void decGrade(void);
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
};
std::ostream& operator<< (std::ostream& out, const Bureaucrat& obj);


#endif
