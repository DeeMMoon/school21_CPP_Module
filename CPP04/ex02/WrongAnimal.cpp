#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout<< "Default WrongAnimal constructor called" << std::endl;
    this->type = "WrongAnimal type";
}

WrongAnimal::~WrongAnimal()
{
    std::cout<< "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
    std::cout<< "Copy WrongAnimal constructor called" << std::endl;
    this->type = obj.getType();
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout<< "Default WrongAnimal constructor called" << std::endl;
    this->type = type;
}

std::string WrongAnimal::getType(void)const{return (type);}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &obj){
    if(this == &obj)
        return (*this);
    this->type = obj.getType();
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout<< "WrongAnimal make sound" << std::endl;
}