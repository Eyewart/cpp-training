#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "Anoynmous";
}

Zombie::Zombie(std::string str) : name(str) {};

Zombie::Zombie(const Zombie& B)
{
	*this = B;
}

Zombie::~Zombie()
{
	std::cout << this->name << " is dead." << std::endl;
}

Zombie& Zombie::operator=(const Zombie& B)
{
	if (this == &B)
		return (*this);
	this->name = B.name;
	return (*this);
}

void Zombie::setName(std::string str)
{
	this->name = str;
}

void Zombie::announce (void)
{
	std::cout << this->name << ": BraiiiiiiinnnnzzzZ..." << std::endl;
}

Zombie* newZombie (std::string name)
{
	return (new Zombie(name));
}

void randomChump (std::string name)
{
	Zombie(name).announce();
}



