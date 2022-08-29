#include "Weapon.hpp"

	Weapon::Weapon()
	{
		this->type="Random";
	}
	Weapon::Weapon(const Weapon& B)
	{
		*this = B;
	}
	Weapon::~Weapon()
	{
		// Destructor
	}
	const std::string& Weapon::getType() const
	{
		return(this->type);
	}
	void Weapon::setType(std::string str)
	{
		this->type = str;
	}