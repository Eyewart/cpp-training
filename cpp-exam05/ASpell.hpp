#pragma once
#include <iostream>

class ASpell {
private:
	std::string name;
	std::string effects;

public:
	ASpell();
	~ASpell();
	ASpell *clone() const;
	const std::string& getName() const;
	const std::string& getEffects() const;
};

