#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

#include <iostream>

class Dog : public Animal
{
private:
    Brain* brain;
public:
		Dog();
		Dog(std::string type);
		Dog(Dog const& obj);
		Dog& operator=(Dog const& obj);
		~Dog();

		virtual void makeSound() const;
		Brain *get_Brain()const;
};

#endif
