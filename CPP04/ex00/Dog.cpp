#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout<< "Default Dog constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout<< "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& obj)
{
    std::cout<< "Copy Dog constructor called" << std::endl;
    this->type = obj.getType();
}

Dog& Dog::operator=(const Dog &obj){
    if(this == &obj)
        return (*this);
    this->type = obj.getType();
    return (*this);
}

std::string Dog::getType(void)const{return (type);}

void Dog::makeSound() const
{
    std::cout<< "Dog make sound" << std::endl;
}