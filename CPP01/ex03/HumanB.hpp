#ifndef HUMANB_HPP
#define HUMANB_HPP


#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
private:
    std::string name;
    Weapon *weapon;
public:
    HumanB ();
    HumanB(std::string name);
    ~HumanB();
    void attack( void ) const;
    void setWeapon(Weapon &w);
};

#endif
