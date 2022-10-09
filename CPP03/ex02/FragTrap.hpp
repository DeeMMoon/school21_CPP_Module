#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:

    FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const& obj);
	FragTrap& operator=(FragTrap const& obj);
	~FragTrap();
	void highFiveGuys(void);
	void attack(const std::string& target);
	std::string getName(void)const;
    int getHitPoints(void)const;
    int getEnergyPoints(void)const;
    int getAttackDamage(void)const;
};


#endif
