#pragma once
#include <iostream>

class Animal {
protected:
	std::string type;

public:
	Animal();
	Animal(std::string str);
	virtual ~Animal();
	const std::string& getType(void) const;
	void setType(std::string string);
	virtual void makeSound() const {std::cout << "*sound of Animal*" << std::endl;}
};