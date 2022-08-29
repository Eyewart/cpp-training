#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDamage(0), name("Anonymous") {}

ClapTrap::ClapTrap(std::string str)
{
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;

	this->name = str;
	std::cout << "ClapTrap " << str << " created." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name << " is being deleted of the memory." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& B)
{
	*this = B;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& B)
{
	if (this == &B)
		return (*this);
	this->name = B.name;
	this->hitPoints = B.hitPoints;
	this->energyPoints = B.energyPoints;
	this->attackDamage = B.attackDamage;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints == 0)
		std::cout << this->name << " is already dead and can't attack!" << std::endl;
	else if (this->energyPoints)
	{
		this->energyPoints--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " point of damage!" << std::endl;
 	}
	else
		std::cout << this->name << " is out of energy." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints == 0)
		std::cout << "ClapTrap " << this->name << " is already dead and can't any more damage." << std::endl;
	else if (this->hitPoints <= amount)
	{
		this->hitPoints = 0;
		std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage and dies!" << std::endl;
	}
	else
	{
		this->hitPoints -= amount;
		std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage and has " << this->hitPoints << " hitpoints left!" << std::endl;
	}

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints == 0)
		std::cout << "ClapTrap " << this->name << " is already dead and can't be repaired." << std::endl;
	if (this->energyPoints == 0)
		std::cout << this->name << " is out of energy." << std::endl;
	else
	{
		this->energyPoints--;
		this->hitPoints = this->hitPoints + amount;
		std::cout << "ClapTrap " << this->name << " is repaired for " << amount << " hitpoints and now has a total of " << this->hitPoints << " hitpoints!" << std::endl;
	}
}