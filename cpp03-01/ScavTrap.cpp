#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string str) 
{
	this->name = str;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}
//: hitPoints(100), energyPoints(50), attackDamage(20), name(str) {}
ScavTrap::~ScavTrap()
{
	//
}
void ScavTrap::attack(unsigned int amount)
{
	
}

void ScavTrap::guardGate() 
{
	std::cout << this->name << " has entered the Gate keeper mode" << std::endl;
}