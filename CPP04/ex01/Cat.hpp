#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

#include <iostream>

class Cat : public Animal
{
private:
    Brain* brain;
public:
    Cat();
    Cat(std::string type);
    Cat(Cat const& obj);
    Cat& operator=(Cat const& obj);
    ~Cat();
    virtual void makeSound() const;
    Brain *get_Brain()const;
};

#endif
