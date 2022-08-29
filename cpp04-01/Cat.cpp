#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat") {
	std::cout << "I am Kitty" << std::endl;
	this->C_Brain = new Brain();
}

Cat::~Cat()
{
	delete this->C_Brain;
	std::cout << "*cat dissapeared*" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Miaouw Miaouw!" << std::endl;
}