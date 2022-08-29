#include "HumanA.hpp"

HumanA::HumanA(std::string name, std::string type)
{
	this->setName(name);
	this->WeaponA.setType(type);
}
void HumanA::setName(std::string str)
{
	this->name=str;
}
void HumanA::attack()
{
	std::cout << this->name << "attacks with their" << this->WeaponA.getType();
}