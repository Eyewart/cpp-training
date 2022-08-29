#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string str);
	~ScavTrap();
	void attack(unsigned int amount);
	void guardGate();
};