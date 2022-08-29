#pragma once
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"


class Warlock {
private:
	std::string name;
	std::string title;
	Warlock();

public:
	Warlock(std::string str1, std::string str2);
	virtual ~Warlock();
	const std::string& getName() const;
	const std::string& getTitle() const;
	void setTitle(const std::string& Title);
	void introduce() const;
	//ex01
	void learnSpell(ASpell* spell);
	void forgetSpell(const std::string spell);
	void launchSpell(const std::string spell, ATarget& target);

};
