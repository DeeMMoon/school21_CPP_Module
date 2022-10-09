#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    name = "unnamed";
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}
ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "ScavTrap constructor with params called" << std::endl;
    this->name = name;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}
ScavTrap::ScavTrap (const ScavTrap &obj): ClapTrap(obj)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = obj;
}
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap called Destructor" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(hitPoints <= 0 || energyPoints <= 0)
        return;
    std::cout << "ScavTrap " << name << " attacks " << target;
    std::cout << ", causing " << attackDamage << " points of damage!" << std::endl;
    energyPoints --;
    std::cout << "ScavTrap " << name << "'s energy level = " << energyPoints << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &obj)
{
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    if (this == &obj)
        return (*this);
    name = obj.name;
    hitPoints = obj.getHitPoints();
    energyPoints = obj.getEnergyPoints();
    attackDamage = obj.getAttackDamage();
    return (*this);
}