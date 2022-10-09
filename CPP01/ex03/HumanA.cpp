#include "HumanA.hpp"

HumanA::HumanA (std::string name, Weapon &w) : weapon(w)
{
    this->name = name;
}

HumanA::~HumanA(){}

void HumanA::attack( void ) const
{
    std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}