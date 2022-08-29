#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *C_Brain;
public:
	Cat();
	~Cat();
	//const std::string& getType(void) const;
	void makeSound() const;
};