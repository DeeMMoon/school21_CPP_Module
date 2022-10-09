#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap default constructor called" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    this->name = "default";
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap constructor with parametr called" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    this->name = name;
}
std::string FragTrap::getName(void)const{return (name);}
int FragTrap::getHitPoints(void)const{return (hitPoints);}
int FragTrap::getEnergyPoints(void)const{return (energyPoints);}
int FragTrap::getAttackDamage(void)const{return (attackDamage);}

FragTrap::FragTrap(FragTrap const& obj)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
	*this = obj;
}
FragTrap& FragTrap::operator=(FragTrap const& obj)
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
FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}
void FragTrap::highFiveGuys(void)
{
	if (this->hitPoints <= 0)
		return ;
	std::cout << "FragTrap " << this->name << " request hive fives... Give it to him!" << std::endl;
}
void FragTrap::attack(const std::string& target)
{
if (this->hitPoints <= 0 || this->energyPoints <= 0)
		return ;
	this->energyPoints--;
	std::cout << "FragTrap " << this->name << " attacks " << target << " with " << this->attackDamage << " damage!"
			 << " FragTrap lose 1 energy, " << this->energyPoints << " left..." << std::endl;
}