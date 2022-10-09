#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), brain(NULL)
{
	this->brain = new Brain();
	std::cout << this->type << "Default constructor" << std::endl;
}

Dog::Dog(Dog const& obj) : Animal()
{
	std::cout << "Dog copy constructor" << std::endl;
	*this = obj;
}

Dog& Dog::operator=(const Dog &obj){
    if(this == &obj)
        return (*this);
    this->type = obj.Animal::getType();
    delete this->brain;
    this->brain = new Brain();
    *(this->brain) = *(obj.brain);
    return (*this);
}

Dog::~Dog()
{
	std::cout << this->type << "Destructor" << std::endl;
	delete this->brain;
}

void Dog::makeSound() const
{
	std::cout << getType() << "Dog make sound" << std::endl;
}

Brain *Dog::get_Brain()const
{
	return (this->brain);
}