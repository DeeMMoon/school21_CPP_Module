#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal {
protected:
    std::string type;
public:
    Animal();
    virtual ~Animal();
    Animal(std::string type);
    std::string getType(void)const;
    virtual void makeSound(void) const = 0;
private:
    Animal(const Animal& obj);
    Animal& operator=(const Animal& obj);
};

#endif
