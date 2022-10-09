#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout<< "Default Cat constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout<< "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& obj)
{
    std::cout<< "Copy Cat constructor called" << std::endl;
    this->type = obj.getType();
}

Cat& Cat::operator=(const Cat &obj){
    if(this == &obj)
        return (*this);
    this->type = obj.getType();
    return (*this);
}

std::string Cat::getType(void)const{return (type);}

void Cat::makeSound() const
{
    std::cout<< "Cat make sound" << std::endl;
}