#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
    name = "unnamed";
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}
ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Constructor with params called" << std::endl;
    this->name = name;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}
ClapTrap::ClapTrap (const ClapTrap &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}
ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

std::string ClapTrap::getName(void)const{return (name);}
int ClapTrap::getHitPoints(void)const{return (hitPoints);}
int ClapTrap::getEnergyPoints(void)const{return (energyPoints);}
int ClapTrap::getAttackDamage(void)const{return (attackDamage);}

ClapTrap& ClapTrap::operator=(ClapTrap const &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &obj)
        return (*this);
    name = obj.name;
    hitPoints = obj.getHitPoints();
    energyPoints = obj.getEnergyPoints();
    attackDamage = obj.getAttackDamage();
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if(hitPoints <= 0 || energyPoints <= 0)
        return;
    std::cout << "ClapTrap " << name << " attacks " << target;
    std::cout << ", causing " << attackDamage << " points of damage!" << std::endl;
    energyPoints --;
    std::cout << "ClapTrap " << name << "'s energy level = " << energyPoints << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if(hitPoints <= 0 || energyPoints <= 0)
        return;
    std::cout << "ClapTrap " << name << " get damage " << amount << " points";
    hitPoints -= amount;
    if (hitPoints <= 0)
    {
        hitPoints = 0;
        std::cout << " !DIED!";
        return;
    }
    std::cout << ". Health level = " << hitPoints << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if(hitPoints <= 0 || energyPoints <= 0)
        return;
    std::cout << "ClapTrap " << name << " repair itself with " << amount << " points.";
    hitPoints += amount;
    energyPoints --;
    std::cout << ". Health level = " << hitPoints << ", energy level = " << energyPoints<< std::endl;
}
