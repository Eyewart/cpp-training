#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "I am Doggy" << std::endl;
	this->D_Brain = new Brain();
}

Dog::~Dog()
{
	delete this->D_Brain;
	std::cout << "*dog dissapeared*" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Wof Wof!" << std::endl;
}

Dog::Dog(const Dog& X) : Dog()
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->D_Brain = new Brain();
}

const Dog& Dog::operator=(const Dog& X)
{
	if (this == &X)
		return (*this);
	this->type = X.type;
	*this->D_Brain = *X.D_Brain;
	return (*this);
}

void Dog::store_idea (unsigned int index, std::string str)
{
	this->D_Brain->store_idea(index, str);
}

std::string Dog::retrieve_idea (unsigned int index) const
{
	return(this->D_Brain->retrieve_idea(index));
}