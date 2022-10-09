#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), brain(NULL)
{
	this->brain = new Brain();
	std::cout << this->type << "Default constructed!" << std::endl;
}

Cat::Cat(Cat const& obj) : Animal()
{
	std::cout << "Cat copy constructor called!" << std::endl;
	*this = obj;
}

Cat& Cat::operator=(const Cat &obj){
    if(this == &obj)
        return (*this);
    this->type = obj.Animal::getType();
    delete this->brain;
    this->brain = new Brain();
    *(this->brain) = *(obj.brain);
    return (*this);
}

Cat::~Cat()
{
	std::cout << this->type << "Destructor" << std::endl;
	delete this->brain;
}

void Cat::makeSound() const
{
	std::cout << getType() << "Cat make sound" << std::endl;
}

Brain *Cat::get_Brain()const
{
	return (this->brain);
}