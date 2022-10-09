#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout<< "Default WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout<< "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj)
{
    std::cout<< "Copy WrongCat constructor called" << std::endl;
    this->type = obj.type;
}

std::string WrongCat::getType(void)const{return (type);}

WrongCat& WrongCat::operator=(const WrongCat &obj){
    if(this == &obj)
        return (*this);
    this->type = obj.getType();
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout<< "WrongCat make sound" << std::endl;
}
