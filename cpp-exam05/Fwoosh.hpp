#pragma once
#include <iostream>
#include "ASpell.h"

class Fwoosh : public ASpell {
private:
	std::string name;
	std::string effects;

public:
	Fwoosh();
	~Fwoosh();
	ASpell *clone() const;
	const std::string& getName() const;
	const std::string& getEffects() const;
};