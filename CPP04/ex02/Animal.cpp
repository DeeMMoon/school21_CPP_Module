#include "Animal.hpp"

Animal::Animal()
{
    std::cout<< "Default Animal constructor called" << std::endl;
    this->type = "default type";
}

Animal::~Animal()
{
    std::cout<< "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& obj)
{
    std::cout<< "Copy Animal constructor called" << std::endl;
    this->type = obj.getType();
}

Animal::Animal(std::string type)
{
    std::cout<< "Default Animal constructor called" << std::endl;
    this->type = type;
}

std::string Animal::getType(void)const{return (type);}

Animal& Animal::operator=(const Animal &obj){
    if(this == &obj)
        return (*this);
    this->type = obj.getType();
    return (*this);
}

void Animal::makeSound() const
{
    std::cout<< "Animal make sound" << std::endl;
}