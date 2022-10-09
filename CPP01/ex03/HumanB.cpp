#include "HumanB.hpp"

HumanB::HumanB() {}

HumanB::HumanB(std::string name) {
    this->name = name;
}

void HumanB::setWeapon(Weapon &w) {
    weapon = &w;
}

HumanB::~HumanB() {}

void HumanB::attack( void ) const {
    std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}