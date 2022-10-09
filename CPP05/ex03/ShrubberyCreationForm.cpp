#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form()
{}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm  & src) : Form(src)
{}
ShrubberyCreationForm::~ShrubberyCreationForm()
{}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
    this->Form::operator=(src);
    return(*this);
}
void ShrubberyCreationForm::execute(const Bureaucrat& bureaucrat) const
{
    if(this->Form::getSigned() == false)
        throw Form::IsNotSignedException();
    if(bureaucrat.getGrade() > this->Form::getGradeExecute())
        throw Form::GradeTooLowException();

    std::string file_name = this->Form::getName () + "_shrubbery";
    std::ofstream file(file_name);
    file << " \n";
    file << "                                                         .\n";
    file << "                                              .         ;\n";
    file << "                 .              .              ;%     ;;   \n";
    file << "                   ,           ,                :;%  %; \n";
    file << "                    :         ;                   :;%;'     .,\n";
    file << "           ,.        %;     %;            ;        %;'    ,;\n";
    file << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n";
    file << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n";
    file << "               ;%;      %;        ;%;        % ;%;  ,%;'\n";
    file << "                `%;.     ;%;     %;'         `;%%;.%;'\n";
    file << "                 `:;%.    ;%%. %@;        %; ;@%;%'\n";
    file << "                    `:%;.  :;bd%;          %;@%;'\n";
    file << "                      `@%:.  :;%.         ;@@%;' \n";
    file << "                        `@%.  `;@%.      ;@@%;    \n";
    file << "                          `@%%. `@%%    ;@@%;   \n";
    file << "                            ;@%. :@%%  %@@%; \n";
    file << "                              %@bd%%%bd%%:;  \n";
    file << "                                #@%%%%%:;;\n";
    file << "                                %@@%%%::;\n";
    file << "                                %@@@%(o);  . '     \n";
    file << "                                %@@@o%;:(.,'       \n";
    file << "                            `.. %@@@o%::;         \n";
    file << "                               `)@@@o%::;       \n";
    file << "                                %@@(o)::;       \n";
    file << "                               .%@@@@%::;         \n";
    file << "                               ;%@@@@%::;.        \n";
    file << "                              ;%@@@@%%:;;;. \n";
    file << "                          ...;%@@@@@%%:;;;;,..   \n";
    file << " \n";
    
    file.close();
}