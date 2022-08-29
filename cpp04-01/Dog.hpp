#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *D_Brain;
public:
	Dog();
	~Dog();
	Dog(const Dog& X);
	const Dog& operator=(const Dog& X);
	void store_idea (unsigned int index, std::string str);
	std::string retrieve_idea (unsigned int index) const;
	//const std::string& getType(void) const;
	void makeSound() const override;
};