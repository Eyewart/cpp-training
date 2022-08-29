#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("Animal") {}

Animal::Animal(std::string str) : type(str) {}

Animal::~Animal()
{
	std::cout << "*animal dissapeared*" << std::endl;
}
const std::string& Animal::getType(void) const
{
	return(this->type);
}
void Animal::setType(std::string string)
{
	this->type = string;
}

