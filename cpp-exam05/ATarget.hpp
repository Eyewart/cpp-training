#pragma once
#include <iostream>
#include "ASpell.hpp"

class ATarget {
private:
	std::string type;

public:
	ATarget();
	~ATarget();
	virtual ATarget *clone() const = 0;
	const std::string& getType() const;
	void getHitBySpell(const ASpell& spell);
};